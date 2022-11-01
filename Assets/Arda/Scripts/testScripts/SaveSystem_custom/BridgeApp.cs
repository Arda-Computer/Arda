using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Networking;


namespace Vuplex.WebView.Demos {


    public class BridgeApp : MonoBehaviour//, ISaveable
    {
        //public string localFaviconPath;

        [SerializeField] GameObject windowPrefab;
	    CanvasWebViewPrefab canvasPrefab; 


        // Start is called before the first frame update
        void Start()
        {
    	
            this.gameObject.GetComponent<Button>().onClick.AddListener(RunThisTask);
            
        }

        async void RunThisTask()
            {			

                canvasPrefab = Instantiate(windowPrefab).GetComponentInChildren<CanvasWebViewPrefab>();
                await canvasPrefab.WaitUntilInitialized();
                canvasPrefab.WebView.LoadUrl(this.gameObject.name);

	        }


        public object SaveState(){
            

            return new SaveData(){
                
                appURL = this.gameObject.name,
                //faviconPath = this.gameObject.GetComponent<RawImage>().texture

            };

        }


        public void LoadState(object state){
            
            var saveData = (SaveData)state;
            this.gameObject.name = saveData.appURL;
            //this.gameObject.GetComponent<RawImage>().texture = saveData.faviconPath;

            
        }

        [Serializable]
        private struct SaveData{


            public string appURL;
            //public string faviconPath;
        }




    }

}
