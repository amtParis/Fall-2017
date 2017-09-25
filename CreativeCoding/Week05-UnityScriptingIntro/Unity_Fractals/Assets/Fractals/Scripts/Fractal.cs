using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fractal : MonoBehaviour {


	public Mesh mesh;
	public Material material;

	public int maxDepth;
	public float childScale;

	int depth;
	int children;
	float scale = 0;
	bool startedChildren = false;

	void Start () {
		gameObject.AddComponent<MeshFilter>().mesh = mesh;
		gameObject.AddComponent<MeshRenderer>().material = material;

		if (depth < maxDepth) {
			children = Random.Range (1, 5);

		}
	}


	void Initialize (Fractal parent, Vector3 direction, Quaternion orientation) {

		mesh = parent.mesh;
		material = parent.material;
		maxDepth = parent.maxDepth;
		depth = parent.depth + 1;
		childScale = parent.childScale;
		transform.parent = parent.transform;

		//transform.localScale = Vector3.one * childScale;
		transform.localScale = Vector3.one * childScale * scale;

		transform.localPosition = direction * (0.5f + 0.5f * childScale);
		transform.localRotation = orientation;

	}


	IEnumerator CreateChildren () {
		for (int i = 0; i < children; i++) {
			yield return new WaitForSeconds (0.5f);
			new GameObject ("Fractal Child").
			AddComponent<Fractal> ().Initialize (this, randomDirection(), Quaternion.Euler (0f, 0f, Random.Range (0, 360)));
		}
	}

	Vector3 randomDirection(){

		float r = Random.Range(0,6);
		//Debug.Log (r);
		if(r < 1) return Vector3.up;
		else if(r < 2) return Vector3.right;
		else if(r < 3) return Vector3.forward;
		else if(r < 4) return Vector3.down;
		else return Vector3.left;
			
	}

	// Update is called once per frame
	void Update () {
		if (scale < 1.0)
			scale += 1.0f * Time.deltaTime;
		else if(!startedChildren){
			startedChildren = true;
			StartCoroutine(CreateChildren());
		}
		transform.localScale = Vector3.one * childScale * scale;



	}
}
