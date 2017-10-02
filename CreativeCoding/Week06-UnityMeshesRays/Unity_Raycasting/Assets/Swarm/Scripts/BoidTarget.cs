/*
https://github.com/keijiro/unity-boids
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoidTarget : MonoBehaviour {

	public float orbitRadius = 1.0f;

	private Vector3 timeCount = Vector3.zero;
	private Vector3 speed = Vector3.zero;
	Vector3 pos;

	// Use this for initialization
	void Start () {
		speed.x = Random.Range(0.3f, 0.6f);
		speed.y = Random.Range(0.3f, 0.6f);
		speed.z = Random.Range(0.3f, 0.6f);	
		pos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		transform.localPosition = pos + new Vector3(
			Mathf.Sin(timeCount.x),
			Mathf.Sin(timeCount.y),
			Mathf.Sin(timeCount.z)
    	) * orbitRadius;
		timeCount += speed * Time.deltaTime;
	}
}
