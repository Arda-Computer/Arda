using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SaveLoadSystem;
using Vuplex.WebView;




    public class BookmarkApp : MonoBehaviour
    {
        public GameObject AppPrefab;
        GameObject appInstance;

        RawImage Image;
        string ImageName;
        string baseURL;




        // Start is called before the first frame update
        void Start()
        {
            this.gameObject.GetComponent<Button>().onClick.AddListener(CreateBookmark);
        }




        void CreateBookmark()
        {	

            //Instantiate GO with url as name and favicon as image texture
            appInstance = Instantiate(AppPrefab, GameObject.FindWithTag("Respawn").transform);
            appInstance.name = this.gameObject.transform.parent.transform.parent.GetComponentInChildren<CanvasWebViewPrefab>().WebView.Url;
            
            //need to get url in correct png format
            baseURL = appInstance.name;
            baseURL = baseURL.Replace("https://", "");
            int index = baseURL.IndexOf("/");  
            baseURL = baseURL.Substring(0, index);
            //apply favicon to GO
            byte[] UploadByte = File.ReadAllBytes(Application.persistentDataPath + "/saves/favicons/"+ baseURL + ".png");
            Texture2D texture = new Texture2D(10,10);
            texture.LoadImage(UploadByte);
            appInstance.GetComponent<RawImage>().texture = texture;

            
            SaveLoadSystemClass.SaveNew();


        }

    


    }

