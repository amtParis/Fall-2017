using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// use the ARKit namespace
namespace UnityEngine.XR.iOS
{
	
public class ARK_PlaceInSpace : MonoBehaviour {
	
	public GameObject myPrefab;
	
	bool madeSwarm = false;
	GameObject theSwarm;



	// Use this for initialization
	void Start () {
		
	}
	
	

	// Update is called once per frame
	void Update () {
		
		// check for a touch on screen
		if (Input.touchCount > 0) {
			var touch = Input.GetTouch (0);

				if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved) {
				
					var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
					ARPoint point = new ARPoint {
						x = screenPosition.x,
						y = screenPosition.y
					};

					// prioritize reults types
					ARHitTestResultType[] resultTypes = {
						ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
						// if you want to use infinite planes use this:
						//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
						ARHitTestResultType.ARHitTestResultTypeHorizontalPlane, 
						ARHitTestResultType.ARHitTestResultTypeFeaturePoint
					}; 

					foreach (ARHitTestResultType resultType in resultTypes){
						
						List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultType);
						if (hitResults.Count > 0) {
							foreach (var hitResult in hitResults) {
								Vector3 hitPos = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								if (!madeSwarm) { 

									theSwarm = Instantiate (myPrefab, hitPos, Quaternion.identity);
									madeSwarm = true;
								} else {
									theSwarm.transform.position = hitPos;
								}
								break;
							}
						}
					}
				}
			}
		}
}

// end namespace
}
