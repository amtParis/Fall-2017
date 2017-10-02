using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QueenOfUniverse : MonoBehaviour {


	public GameObject myPrefab;

	// Use this for initialization
	void Start () {

		MySphere.globalSpeed = 20.0f;
		MySphere.globalTarget = gameObject;
		MySphere.globalYawing = 200.0f;

		StartCoroutine( CreateSpheres() );

	}

	IEnumerator CreateSpheres(){

		for (int i = 0; i < 20; i++) {

			Vector3 pos = new Vector3( Random.Range(-5,5), Random.Range(-5,5), Random.Range(-5,5) );

			GameObject newObject = Instantiate(myPrefab);
			newObject.transform.position = pos;

			// wait for seconds to continue
			yield return new WaitForSeconds(0.5f);
		}
	}

	// Update is called once per frame
	void Update () {
		
	}
}
