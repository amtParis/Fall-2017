using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CylinderBehaviour : MonoBehaviour {

	float height;
	float freq;

	// Use this for initialization
	void Start () {
		height = Random.Range(1,2);	
		freq = Random.Range(.5f,2.0f);
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 scale = transform.localScale;
		scale.y = height + (Mathf.Sin( freq*Time.time )*.5f + .5f);
		

		Vector3 pos = transform.position;
		pos.y = scale.y;// * .5f;
		transform.position = pos;
		transform.localScale = scale;
	}
}
