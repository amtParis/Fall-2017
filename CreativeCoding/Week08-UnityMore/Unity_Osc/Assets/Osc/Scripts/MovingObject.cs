using UnityEngine;
using System.Collections;

public class MovingObject : MonoBehaviour {

	Vector3 rotVelocity = new Vector3(0f,0f,0f);
	Mesh originalMesh;
	Vector3[] originalVertices;
	Vector3[] randVertices;
	
	Vector3 baseVal;
	float amount = .5f;

	GameObject[] points;

	public float targetAmount = .5f;
	public GameObject dotPrefab;
	

	// Use this for initialization
	void Start () {

		baseVal = new Vector3(Random.value,Random.value,Random.value);
		originalMesh = GetComponent<MeshFilter>().mesh;
		originalVertices = originalMesh.vertices;

		points = new GameObject[originalVertices.Length];
		
		for(int i = 0; i < originalVertices.Length; i++){
			points[i] = (GameObject)Instantiate(dotPrefab, originalVertices[i], Quaternion.identity); 
			points[i].transform.parent = this.transform;

		}
		
	}
	
	// Update is called once per frame
	void Update () {
		
		//speed = .9f*speed + .1f*targetSpeed;
		amount = .9f*amount + .1f*targetAmount;
		targetAmount *= .99f;
		// change vertices with noise
		Mesh mesh = GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;

        for(int i = 0; i < vertices.Length; i++){
        	
        	float noiseX = Mathf.PerlinNoise(originalVertices[i].x+baseVal.x,originalVertices[i].y+baseVal.y)- 0.5f;
        	float noiseY = Mathf.PerlinNoise(originalVertices[i].y+baseVal.y,originalVertices[i].z+baseVal.z)- 0.5f;
        	float noiseZ = Mathf.PerlinNoise(originalVertices[i].z+baseVal.z,originalVertices[i].x+baseVal.x)- 0.5f;

        	Vector3 noiseVector = new Vector3(noiseX,noiseY,noiseZ);

        	Vector3 fromCenter = vertices[i]-mesh.bounds.center;
        	fromCenter.Normalize();
        	
        	vertices[i] = originalVertices[i] + Vector3.Scale(noiseVector,fromCenter)*amount; 
        	
        	points[i].transform.localPosition = vertices[i] + Vector3.Scale( new Vector3(.003f,.003f,.003f),fromCenter);
        	points[i].transform.LookAt(Camera.main.transform.position, -Vector3.up);
        }
        
        mesh.vertices = vertices;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
        
        baseVal += new Vector3(amount,amount,amount) * Time.deltaTime;
	}

	public void SetNoiseAmount( float val ){
		
		targetAmount = val*2f;

	}
}
