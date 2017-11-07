using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TexureToPoints : MonoBehaviour {

	public Texture2D texture;
	public GameObject prefab;	// assume prefab has mesh filter + renderer
	public float pct = 0.0f;
	
	GameObject [] children;

	// Use this for initialization
	void Start () {

		// get width and height of image
		int w = texture.width;
		int h = texture.height;

		// determing how many meshes based on limit of 65k vertices per mesh
		int totalChildrenNeeded = (int)( Mathf.Ceil((w*h) / 65000.0f) ) + 1;
	
		// make array of game bjects for meshes
		children = new GameObject[totalChildrenNeeded];

		// get pixels from texture as Color array
		Color [] pixels;
		pixels = texture.GetPixels();

		print(totalChildrenNeeded);


		for( int j = 0; j < totalChildrenNeeded; j++){
			
			// find total per mesh
			int total = 65000;
			if( j * total > pixels.Length) total = (j * total ) - pixels.Length;

			children[j] = Instantiate(prefab, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
			children[j].transform.parent = transform;

			Mesh mesh;
			mesh = new Mesh();

			Vector3 [] vertices = new Vector3[total];
			Color [] colors = new Color[total];
			int [] indices = new int[total];

			// find where to start and end (only in y as go in strips along x)
			int starty = j * (int)(h/totalChildrenNeeded);
			int endy = starty + (int)(h/totalChildrenNeeded);
			if(endy > pixels.Length) endy = pixels.Length;

			if(endy > h-1) endy = h-1;
			int count = 0;
			for(int x = 0; x < w; x+=2){
				for(int y = starty; y < endy; y+=2){
					int i = y * w + x;
					float px = (float)x / (float)w;
					float py = (float)y / (float)w;
					vertices[count] = new Vector3(px,0.0f,py);
					indices[count] = count;
					colors[count] = pixels[i];
					count++;
				}
			}

			
			children[j].GetComponent<MeshFilter>().mesh = mesh;

			mesh.vertices = vertices;
			mesh.colors = colors;
			mesh.SetIndices(indices,MeshTopology.Points,0);
		}
		


	}
	
	// Update is called once per frame
	void Update () {
		for( int i = 0; i < children.Length; i++){
			Material mat = children[i].GetComponent<MeshRenderer>().material;
			mat.SetFloat("_BlendPct",pct);

		}
	}
}
