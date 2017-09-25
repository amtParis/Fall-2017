using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyManager : MonoBehaviour {

    public GameObject bowlingBall;
    Transform player;

	// Use this for initialization
	void Start () {
        player = Camera.main.transform;
	}
	
	// Update is called once per frame
	void Update () {
        
        if (Input.GetKeyDown("r")){
            // throw ball
            bowlingBall.transform.position = player.position + player.forward * 1f;
            Vector3 traject = player.forward;
            //traject.y += .5f;
            bowlingBall.GetComponent<Rigidbody>().AddForce( traject * 200f);
            //(Vector3 force, ForceMode mode = ForceMode.Force
        }

	}
}
