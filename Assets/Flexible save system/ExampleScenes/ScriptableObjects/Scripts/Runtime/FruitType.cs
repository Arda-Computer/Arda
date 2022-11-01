using System.Collections.Generic;
using UnityEngine;
using SaveLoadSystem;
// Make shure you place any instance of this ScriptableObject in a folder called "Resources"
// so the IDFinder is able to load them back at runtime by using Resources.LoadAll<FruitType>("");
// It is recommended to create a editor script for this ScriptableObject using the template: "02-c# Templates_SaveableScriptableObjectID.cs.txt"

// Created using the Template: "01-c# Templates__SaveableScriptableObjRef-NewScriptableObjID.cs"
[CreateAssetMenu(fileName = "FruitType", menuName = "ScriptableObjects/FruitType")]
public class FruitType : ScriptableObject, ISaveID
{
    // Create a string called "m_ID" (must be this name so that the editor script can find the property)
    [SerializeField] [HideInInspector] private string m_ID;

    // Implementation of the ISaveID interface
    // Use the GetID in the ISaveable.SaveState() function when you have to save the reference to this scriptable object.
    public string GetID()
    {
        return m_ID;
    }
    public void SetID(string ID)
    {
        m_ID = ID;
    }

    // Your stuff:
    enum Taste
    {
        sweet,
        sour,
    }
    [SerializeField] int weight;
    [SerializeField] Taste taste;
    [SerializeField] string description;

    public new string ToString()
    {
        return description + " Taste: " + taste.ToString() + " Weight: " + weight;
    }
}