using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateCloud : MonoBehaviour {

	float speed;

	// Use this for initialization
	void Start () {
		speed = Random.value * 10.0f;	
	}
	
	// Update is called once per frame
	void Update () {
		transform.RotateAround( Vector3.zero, Vector3.up, Time.deltaTime * speed);
		transform.Rotate( Vector3.up, Time.deltaTime * speed * .1f);
	}
}
