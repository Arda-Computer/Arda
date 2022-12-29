using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenDebug : MonoBehaviour
{
    public GameObject DebugWindow;

    public void InstantiateDebug(){

        Instantiate(DebugWindow);

    }
}
