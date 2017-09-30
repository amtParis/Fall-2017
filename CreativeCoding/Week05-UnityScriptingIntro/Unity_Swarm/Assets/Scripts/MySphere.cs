using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MySphere : MonoBehaviour {

	// static variables will be same for all instances
	public static GameObject globalTarget;
	public static float globalSpeed = 0.1f;
	public static float globalYawing = 90.0f;

	public float mySpeed;


	float yawingScale = 1.0f;
	float speedScale = 1.0f;

	// Use this for initialization
	void Start () {

		speedScale = Random.Range(.1f,.5f);
	}
	
	// Update is called once per frame
	void Update () {
		// just to verify what Chris said is true
		mySpeed = globalSpeed;

		// position update
		transform.position += transform.forward * (globalSpeed * speedScale * Time.deltaTime);

		// rotation update
		Quaternion rotation = Quaternion.FromToRotation(
			transform.forward, 
			globalTarget.transform.position - transform.position);

		transform.rotation = Quaternion.RotateTowards(
			Quaternion.identity, 
			rotation, 
			globalYawing * yawingScale * Time.deltaTime) * transform.rotation;

	}
}
