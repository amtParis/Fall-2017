using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayCastManager : MonoBehaviour {

    float m_DefaultDistance = 10.0f;
    private Transform m_Camera;

	public GameObject boidPrefab;


	// Use this for initialization
	void Start () {
        m_Camera = Camera.main.transform;
	}
	
	// Update is called once per frame
	void Update () {
        Ray ray = new Ray(m_Camera.position, m_Camera.forward);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, 500f))
        {

            // try to get component
            DanceBehaviour dancer = hit.collider.GetComponent<DanceBehaviour>(); //attempt to get the VRInteractiveItem on the hit object

            if (dancer){
                dancer.SetTime(); 
			}

			if (hit.collider.tag == "HitObject" &&  hit.collider.GetComponent<MeshRenderer> ().enabled) {
				hit.collider.GetComponent<MeshRenderer> ().enabled = false;
				Vector3 position = hit.collider.transform.position;
				Instantiate (boidPrefab,  position, Quaternion.identity);
			}
        }
			
		Vector3 pos = new Vector3 (m_Camera.position.x,m_Camera.position.y-.1f,m_Camera.position.z);
		Debug.DrawRay(pos, m_Camera.forward*100F, Color.cyan);

	}
}
