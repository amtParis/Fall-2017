using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]

public class SimpleMesh : MonoBehaviour {

	public GameObject myPrefab;
	public Material material;

	// Use this for initialization
	void Start () {
		// creating a temporary mesh to set up
		Mesh mesh = new Mesh();

		// make all the verts and triangles
		Vector3 [] vertices = new Vector3[4];
		vertices [0] = new Vector3 (0,1,0);
		vertices [1] = new Vector3 (1,1,0);
		vertices [2] = new Vector3 (0,0,0);
		vertices [3] = new Vector3 (1,0,0);

		// set the vertices we created to the vertices of the mesh
		mesh.vertices = vertices;

		// set up the triangles
		int [] triangles = new int[6];
		triangles [0] = 0;
		triangles [1] = 1;
		triangles [2] = 2;
		triangles [3] = 1;
		triangles [4] = 3;
		triangles [5] = 2;

		// set the mesh triangles to the triangles we justmade
		mesh.triangles = triangles;

		// make some sphere to check it works
		for (int i = 0; i < vertices.Length; i++) {
			Instantiate(myPrefab, vertices[i], Quaternion.identity);
		}

		// set material of renderer
		GetComponent<MeshRenderer>().material = material;

		mesh.RecalculateNormals();

		// set this game objects mesh filter's mesh to the temp mesh
		GetComponent<MeshFilter>().mesh = mesh;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
