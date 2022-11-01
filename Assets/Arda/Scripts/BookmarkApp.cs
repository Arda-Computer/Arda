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



        // Start is called before the first frame update
        void Start()
        {
            this.gameObject.GetComponent<Button>().onClick.AddListener(CreateBookmark);
        }




        void CreateBookmark()
                {	
        
                    //Instantiate GO with url as name and favicon as image texture
                    appInstance = Instantiate(AppPrefab, GameObject.FindWithTag("Respawn").transform);
                    appInstance.name = this.gameObject.transform.parent.GetComponentInChildren<CanvasWebViewPrefab>().WebView.Url;
                    Image = appInstance.GetComponent<RawImage>();
                    ImageName = appInstance.name;
                    ImageName = ImageName.Replace("/","");

                    StartCoroutine(LoadImage("https://www.google.com/s2/favicons?domain="+ appInstance.name +"&sz=256"));

                    //save for each new bookmark created
                    SaveLoadSystemClass.SaveNew();


                }

        
        //get favicon -> image texture
        IEnumerator LoadImage(string ImageUrl){

            ImageName = ImageName.Replace("/","");


            WWW www = new WWW(ImageUrl);
            yield return www;
            if (www.error == null){

                if (!File.Exists(Application.persistentDataPath + "/saves/favicons/"+ ImageName + ".png")){

                //when image downloaded
                Texture2D texture = www.texture;
                Image.texture = texture;
                byte[] dataByte=texture.EncodeToPNG();
                File.WriteAllBytes(Application.persistentDataPath + "/saves/favicons/"+ ImageName + ".png", dataByte);
                Debug.Log("Image saved");
                
            }

            
            }
            else{
                Debug.Log("net error!");
            }




        }


    }

