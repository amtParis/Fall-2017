using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationTester : MonoBehaviour {

	public GameObject target;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		//	Quaternion.FromToRotation(transform.forward, target.transform.position - transform.position);
		//transform.rotation = rotation;

		//transform.rotation = 
		//	Quaternion.RotateTowards(transform.rotation, target.transform.position - transform.position, 20F * Time.deltaTime);

		Vector3 relativePos = target.transform.position - transform.position;
		Quaternion rotation = Quaternion.LookRotation(relativePos);
		transform.rotation = rotation;
	}
}
