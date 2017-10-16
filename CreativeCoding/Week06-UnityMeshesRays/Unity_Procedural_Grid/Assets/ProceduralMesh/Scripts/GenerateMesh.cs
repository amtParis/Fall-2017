using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// When this script is added to a gameobject, it will check if the required
// components exist and add them if not
[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]

public class GenerateMesh : MonoBehaviour {


	Mesh mesh;
	Vector3 [] vertices;
	Vector3 [] o_vertices; // original vertices
	Color[] colors;


	int xSize = 50;
	int ySize = 50;


	public Gradient coloring;
	[Range(1F,500F)]
	public float freq = 100.0F;
	[Range(1,10)]
	public int octaves = 4;
	[Range(.1F,500F)]
	public float amp = 1F;


	// Use this for initialization
	void Start () {


		mesh = new Mesh();
		mesh.name = "Grid";


		vertices = new Vector3[ (xSize + 1) * (ySize + 1) ];
		o_vertices= new Vector3[ (xSize + 1) * (ySize + 1) ];
		colors = new Color[vertices.Length];

		for (int i = 0, y = 0; y <= ySize; y++) {
			for (int x = 0; x <= xSize; x++, i++) {

				float colorVal = 1F;
				colors[i] = coloring.Evaluate( colorVal );
				vertices[i] = new Vector3(x,0F,y) - transform.localScale.x*new Vector3(xSize,amp,ySize);
				o_vertices[i] = new Vector3(x,0F,y) - transform.localScale.x*new Vector3(xSize,amp,ySize);;
			}
		}
		mesh.vertices = vertices;
		mesh.colors = colors;


		int[] triangles = new int[xSize * ySize * 6];
		for (int t = 0, v = 0, y = 0; y < ySize; y++, v++) {
			for (int x = 0; x < xSize; x++, v++, t += 6) {
				triangles[t] = v;
				triangles[t + 1] = v + xSize + 1;
				triangles[t + 2] = v + 1;
				triangles[t + 3] = v + 1;
				triangles[t + 4] = v + xSize + 1;
				triangles[t + 5] = v + xSize + 2;
			}
		}
		mesh.triangles = triangles;

		mesh.RecalculateNormals();

		GetComponent<MeshFilter>().mesh = mesh;
	}
	
	// Update is called once per frame
	void Update () {

		float time = Time.time * 5F;
			
		for (int i = 0, y = 0; y <= ySize; y++) {
			for (int x = 0; x <= xSize; x++, i++) {

				float noiseVal = 0F;
				float gain = 1F;
				for(int j = 0; j < octaves; j++){

					noiseVal +=  Mathf.PerlinNoise( (time*.1f)+x*gain/freq, (time*.1f)+y*gain/freq) * amp/gain;
					gain *= 2.0F;

				}

				float colorVal = (noiseVal- amp*.5F) / (amp*.5F);
				colors[i] = coloring.Evaluate( colorVal );
				vertices[i] = o_vertices[i] + new Vector3(0F, noiseVal - amp*.5F, 0F);
			}
		}
		mesh.vertices = vertices;
		mesh.colors = colors;
		mesh.RecalculateNormals();
	}
}


