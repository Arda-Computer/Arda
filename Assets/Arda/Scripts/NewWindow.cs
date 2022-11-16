using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class NewWindow : MonoBehaviour, ICollectible
{
    public static event HandleGemCollected OnGemCollected;
    public delegate void HandleGemCollected(ItemData item);
    public ItemData gemData;



    public void Collect(){
        OnGemCollected?.Invoke(gemData);
    }



}
