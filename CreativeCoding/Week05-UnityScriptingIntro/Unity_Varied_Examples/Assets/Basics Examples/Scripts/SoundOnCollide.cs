using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundOnCollide : MonoBehaviour {

    AudioSource audio;

    void Start(){
        audio = GetComponent<AudioSource>();
    }

    void OnCollisionEnter(Collision col){
        Debug.Log("collided");
        audio.Play();
    }

}
