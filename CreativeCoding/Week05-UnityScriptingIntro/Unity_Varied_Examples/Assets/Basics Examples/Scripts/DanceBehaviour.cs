using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DanceBehaviour : MonoBehaviour {

    float lastTriggerTime;
    float limitTime = 4f;
    float counter = 0f;
    Vector3 originalSize;

    // Use this for initialization
	void Start () {
        lastTriggerTime = Time.time;
        originalSize = transform.localScale;
	}
	
	// Update is called once per frame
	void Update () {
        Debug.Log((Time.time - lastTriggerTime));
        if( Time.time - lastTriggerTime < limitTime){

            float scale = originalSize.x + Mathf.Sin(counter*2f)*.25f;
            transform.localScale = new Vector3(scale,scale,scale);
            counter += Time.deltaTime;
        }

	}

    public void SetTime(){
        lastTriggerTime = Time.time;
    }



}
