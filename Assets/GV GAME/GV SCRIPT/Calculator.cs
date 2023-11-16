using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Calculator : MonoBehaviour
{

    public Text firstNum;
    public Text secondNum;
    public Text Ans;

    public int First;
    public int Second;
    public int Solution;

    public int Choice;

    public GameObject Ch1;
    public GameObject Ch2;
    public GameObject button1;
    public GameObject button2;
    public GameObject Solu;

    public LevelGameSystem leveling;

    public int weaponAbility; // This will be responsive once the Weapon Shop is Available.

    public int GunRate; // This has already been created 

    // Start is called before the first frame update
    void Start()
    {
        //Play animation to add Choice Menu
    }

    // Update is called once per frame
    void Update()
    {
        firstNum.text =  "" + First;
        secondNum.text =  "" + Second;
        Ans.text =  "" + Solution;

        First = weaponAbility;
        Second = leveling.Level;

        if(Choice == 1)
        {
            Ch1.gameObject.SetActive(true);
            Ch2.gameObject.SetActive(false); // Times

            Solution = First * Second;
            Solu.gameObject.SetActive(true);
        }
        if(Choice == 2)
        {
            Ch1.gameObject.SetActive(false);
            Ch2.gameObject.SetActive(true); // Plus

            Solution = First + Second;
            Solu.gameObject.SetActive(true);
        }
    }

    public void Choice1()
    {
        Choice += 1;
        //Play Animation for Choosen Button1
        //Play Animation for not Choosen Button2
        
        //Activate Continue Button
    }

    public void Choice2()
    {
        Choice += 2;
        //Play Animation for Choosen Button2
        //Play Animation for not Choosen Button1

        //Activate Continue Button
    }

    public void Continue()
    {
        //Play animation to remove Choice Menu
    }


}
