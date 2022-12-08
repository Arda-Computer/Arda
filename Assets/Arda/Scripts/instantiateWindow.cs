using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;

public class instantiateWindow : MonoBehaviour
{
    
    public GameObject windowPrefab;

    // Update is called once per frame
    public void InstantiateAWindow(string s)
    {
        foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room"))
            {
                //Instantiate new window group with startingURL in active room
                if(Room.GetComponent<RoomState>().isActive){

                    Instantiate(windowPrefab, new Vector3(Random.Range(-2.0f, 2.0f),Random.Range(-2.0f, 2.0f),windowPrefab.transform.position.z-0.2f), new Quaternion(0,0,0,0), Room.transform).GetComponentInChildren<CanvasWebViewPrefab>().InitialUrl = s;
                }   
            }
        
    }
}
