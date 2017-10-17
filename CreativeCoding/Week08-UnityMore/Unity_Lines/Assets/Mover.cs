
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {

	public float orbitRadius = 1.0f;

	Vector3 timeCount = Vector3.zero;
	Vector3 speed = Vector3.zero;
	Vector3 lastPos;
	LineRenderer lineRenderer;
	Vector3 [] points;
	List<Vector3> pointList = new List<Vector3>();

	// Use this for initialization
	void Start () {
		lastPos = transform.position;
		speed.x = Random.Range(0.3f, 0.6f);
		speed.y = Random.Range(0.3f, 0.6f);
		speed.z = Random.Range(0.3f, 0.6f);	

		lineRenderer = gameObject.AddComponent<LineRenderer> ();
		lineRenderer.material = new Material(Shader.Find("Unlit/Color"));
		lineRenderer.widthMultiplier = 0.05f;
		lineRenderer.positionCount = 1;

		pointList.Add (transform.position);
		lineRenderer.SetPositions(pointList.ToArray());
	}

	// Update is called once per frame
	void Update () {
		transform.position = new Vector3(
			Mathf.Sin(timeCount.x),
			Mathf.Sin(timeCount.y),
			Mathf.Sin(timeCount.z)
    	) * orbitRadius;
		timeCount += speed * Time.deltaTime;

		Vector3 diff = transform.position - lastPos;
		if (diff.magnitude > .1) {
			pointList.Add(transform.position);
			lastPos = transform.position;
			Debug.Log ("new point");
		}
			
		lineRenderer.positionCount = pointList.Count;
		lineRenderer.SetPositions(pointList.ToArray());
	}
}
