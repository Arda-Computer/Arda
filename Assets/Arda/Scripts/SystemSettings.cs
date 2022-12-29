using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SystemSettings : MonoBehaviour
{
    public TMP_Text BatteryIndicator;
    public TMP_Text DateIndicator;
    public TMP_Text TimeIndicator;
    float PercentageFormat;
    // Start is called before the first frame update
    void Start()
    {
        DateIndicator.text = System.DateTime.Now.ToString("d/M/yyyy");
        TimeIndicator.text = System.DateTime.Now.ToString("HH:mm");

    }

    // Update is called once per frame
    void Update()
    {
        PercentageFormat = SystemInfo.batteryLevel * 100;
        BatteryIndicator.text = PercentageFormat.ToString() + "%";

        
    }
}
