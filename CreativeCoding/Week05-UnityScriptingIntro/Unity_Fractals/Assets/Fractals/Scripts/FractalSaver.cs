using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class FractalSaver : MonoBehaviour {

	public GameObject prefab;
	bool saveMe = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (saveMe) {
			saveMe = false;
			Object new_prefab = PrefabUtility.CreateEmptyPrefab("Assets/Resources/"+prefab.name+".prefab");
			PrefabUtility.ReplacePrefab(prefab, new_prefab, ReplacePrefabOptions.ConnectToPrefab);

		}

		if (Input.GetKeyDown ("space")) {
			saveMe = true;
			Fractal []fractals= prefab.GetComponentsInChildren<Fractal>();
			foreach( Fractal comp in fractals )
			{
				Destroy(comp);
				//..comp.enabled = false;
			}

			}
	}
}
