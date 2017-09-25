using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CylinderManager : MonoBehaviour {

	// Prefab that we will replicate
	public GameObject cylinder_prefab;

	// array of new GameObjects placed in scene
	GameObject [] cylinders;

	// Use this for initialization
	void Start () {
		
		cylinders = new GameObject[20];
		
		int radius = 5;

		// make an array in a circle
		float angle = 0;
		float angleStep = (Mathf.PI*2)/ 20.0f;

		for(int i = 0; i < 20; i++){
			angle+=angleStep;
			float x = radius * Mathf.Sin(angle);
			float y = .5f;
			float z = radius * Mathf.Cos(angle);
			cylinders[i] = Instantiate(cylinder_prefab, new Vector3(x, y, z), Quaternion.identity);

		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
