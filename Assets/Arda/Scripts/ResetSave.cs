using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SaveLoadSystem;
using UnityEngine.SceneManagement;

public class ResetSave : MonoBehaviour
{

    bool saveBool;

    private void Start() {
        saveBool = false;
    }

    public void SaveReset(){
        
        File.Delete(Application.persistentDataPath + "/saves/" + "Save_0.save");
        saveBool = !saveBool;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }

    //save everytime application quits
    void OnApplicationFocus() {
        if (!saveBool){
        SaveLoadSystemClass.SaveNew();
        }

    }
}
