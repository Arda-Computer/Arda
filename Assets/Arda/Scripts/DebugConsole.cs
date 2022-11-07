using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class DebugConsole : MonoBehaviour
{

    string outputLog = "";
    string outputWarning = "";
    string outputError = "";

    public TextMeshProUGUI outputLogText;
    public TextMeshProUGUI outputWarningText;
    public TextMeshProUGUI outputErrorText;
    public TextMeshProUGUI fpsText;

    //fps stuff
    public int refreshRate = 1;
    int frameCounter;
    float totalTime;

    private void Awake() {
        Application.logMessageReceived += HandleLog;


        //fps stuff
        frameCounter = 0;
        totalTime = 0;
    }


        void HandleLog(string LogString, string stackTrace, LogType type){
        
            if (type == LogType.Error || type == LogType.Exception){
            outputError = LogString + "\n" + outputError;
            if (outputError.Length > 600)
            {
                outputErrorText.text = outputError.Substring(0, 600);  
                
            } else
            {
                outputErrorText.text = outputError;
            }
             
        
                }



        
        if (type == LogType.Warning || type == LogType.Assert)
        {
            outputWarning = LogString + "\n" + outputWarning;
            if (outputWarning.Length > 600)
            {
            outputWarningText.text = outputWarning.Substring(0, 600);    

            } else
            {  
                outputWarningText.text = outputWarning;
            }


        }
        
        if(type == LogType.Log){
            outputLog = LogString + "\n" + outputLog;
            if (outputLog.Length > 600)
            {
            outputLogText.text = outputLog.Substring(0, 600);

            } else
            { 
                outputLogText.text = outputLog;
            }

        }
        

    }


    // Update is called once per frame
    void Update()
    {
        if (frameCounter==refreshRate){
            
            float averageFps = (1.0f/(totalTime/refreshRate));
            fpsText.text = averageFps.ToString("F1");
            frameCounter =0;
            totalTime=0;
            //Debug.Log(averageFps);


        } else{
            totalTime += Time.deltaTime;
            frameCounter++;
        }
        
    }








}
