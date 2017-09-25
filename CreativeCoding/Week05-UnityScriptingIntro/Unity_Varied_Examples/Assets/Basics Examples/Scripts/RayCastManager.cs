using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayCastManager : MonoBehaviour {

    float m_DefaultDistance = 10.0f;
    private Transform m_Camera;
    public GameObject m_Marker; 
    Vector3 m_OriginalScale;
    Vector3 m_SmoothPosition;

	// Use this for initialization
	void Start () {
        m_Camera = Camera.main.transform;
        m_OriginalScale = m_Marker.transform.localScale;
        m_Marker = Instantiate(m_Marker, Vector3.zero, Quaternion.identity);
        m_SmoothPosition = Vector3.zero;
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

        }else{
           

        }

        // Set the position of the reticle to the default distance in front of the camera.
        m_Marker.transform.position = /*.5f* m_Marker.transform.position +*/ (m_Camera.position + m_Camera.forward * m_DefaultDistance);

        // Set the scale based on the original and the distance from the camera.
        m_Marker.transform.localScale = m_OriginalScale * m_DefaultDistance;

       


	}
}
