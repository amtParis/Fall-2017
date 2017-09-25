using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhysicsBasicManager : MonoBehaviour {

    List<GameObject> cubes = new List<GameObject>();
    GameObject prefab;
    int totalSpheres = 200;

    // Use this for initialization
	void Start () {
        prefab = Resources.Load("Prefabs/DropSphere",typeof(GameObject)) as GameObject;

        StartCoroutine(DropASphere());
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    IEnumerator DropASphere(){
       
        for (int i = 0; i < totalSpheres; i++){
            
            float distance = Random.Range(5,8);
            float angle = Random.Range(0,Mathf.PI*2);
            Vector3 pos = new Vector3( distance * Mathf.Sin(angle), Random.Range(1,3), distance * Mathf.Cos(angle));
            GameObject go = Instantiate(prefab, pos, Quaternion.identity);
            cubes.Add(go);

            yield return new WaitForSeconds(5);
        }

    }
}
