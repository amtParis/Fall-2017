using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OscInteractManager : MonoBehaviour {

    public OSC osc;
    public MovingObject MyMovingObject;


    // Use this for initialization
	void Start () {
		
        //osc.SetAddressHandler( "/gesture/mouth/width" , OnReceiveMouthWidth );
		osc.SetAddressHandler( "/mouse/position" , OnReceiveMouse );

	}

	void OnReceiveMouse(OscMessage m){

		float mouseX = m.GetFloat(0);
		//float scaleMX = mouseX / 1024.0f; // now 0 to 1
		MyMovingObject.SetNoiseAmount(mouseX); 

	}

	// Update is called once per frame
	void Update () {
		
        // OscMessage message
        OscMessage message = new OscMessage();
        message.address = "/test";
        message.values.Add(2.0f);
        osc.Send(message);

        // /gesture/mouth/width


	}

    void OnReceiveMouthWidth(OscMessage message){
        
		// get first float value at position 0
		float width = message.GetFloat(0);


        float newNoise = (width - 10.0f) / 10f;
        if (newNoise < 0)
            newNoise = 0;
		
        Debug.Log("Mouth width " + width + " noise " + newNoise);
		MyMovingObject.SetNoiseAmount(newNoise); 

    }
}
