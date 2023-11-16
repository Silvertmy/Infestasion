using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class AchievementGift : MonoBehaviour
{
    public GameObject Gbutton1, Gbutton2, Gbutton3, Gbutton4, Gbutton5, Gbutton6, Gbutton7, Gbutton8, Gbutton9, Gbutton10, Gbutton11, Gbutton12, Gbutton13, Gbutton14, Gbutton15;

    public GameObject Selected1, Selected2, Selected3, Selected4, Selected5, Selected6, Selected7, Selected8, Selected9, Selected10, Selected11, Selected12, Selected13, Selected14, Selected15;

    public GameObject Box1, Box2, Box3, Box4, Box5, Box6, Box7, Box8, Box9, Box10, Box11, Box12, Box13, Box14, Box15;

    public GameObject Info1, Info2, Info3, Info4, Info5, Info6, Info7, Info8, Info9, Info10, Info11, Info12, Info13, Info14, Info15;

    public int AvGate1, AvGate2, AvGate3, AvGate4, AvGate5, AvGate6, AvGate7, AvGate8, AvGate9, AvGate10, AvGate11, AvGate12, AvGate13, AvGate14, AvGate15;

    public GameObject Glow1, Glow2, Glow3, Glow4, Glow5, Glow6, Glow7, Glow8, Glow9, Glow10, Glow11, Glow12, Glow13, Glow14, Glow15;

    public GameObject ClaimBut1, ClaimBut2, ClaimBut3, ClaimBut4, ClaimBut5, ClaimBut6, ClaimBut7, ClaimBut8, ClaimBut9, ClaimBut10, ClaimBut11, ClaimBut12, ClaimBut13, ClaimBut14, ClaimBut15;

    public int MainGate = 1;

    public LevelGameSystem level;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(level.Achieve1 == 1)
        {
            //If condition has been met the glow border is true
            Glow1.gameObject.SetActive(true);
        }
        if(level.Achieve2 == 1)
        {
            //If condition has been met the glow border is true
            Glow2.gameObject.SetActive(true);
        }
        if(level.Achieve3 == 1)
        {
            //If condition has been met the glow border is true
            Glow3.gameObject.SetActive(true);
        }
        if(level.Achieve4 == 1)
        {
            //If condition has been met the glow border is true
            Glow4.gameObject.SetActive(true);
        }
        if(level.Achieve5 == 1)
        {
            //If condition has been met the glow border is true
            Glow5.gameObject.SetActive(true);
        }
        if(level.Achieve6 == 1)
        {
            //If condition has been met the glow border is true
            Glow6.gameObject.SetActive(true);
        }
        if(level.Achieve7 == 1)
        {
            //If condition has been met the glow border is true
            Glow7.gameObject.SetActive(true);
        }
        if(level.Achieve8 == 1)
        {
            //If condition has been met the glow border is true
            Glow8.gameObject.SetActive(true);
        }
        if(level.Achieve9 == 1)
        {
            //If condition has been met the glow border is true
            Glow9.gameObject.SetActive(true);
        }
        if(level.Achieve10 == 1)
        {
            //If condition has been met the glow border is true
            Glow10.gameObject.SetActive(true);
        }
        if(level.Achieve11 == 1)
        {
            //If condition has been met the glow border is true
            Glow11.gameObject.SetActive(true);
        }
        if(level.Achieve12 == 1)
        {
            //If condition has been met the glow border is true
            Glow12.gameObject.SetActive(true);
        }
        if(level.Achieve13 == 1)
        {
            //If condition has been met the glow border is true
            Glow13.gameObject.SetActive(true);
        }
        if(level.Achieve14 == 1)
        {
            //If condition has been met the glow border is true
            Glow14.gameObject.SetActive(true);
        }
        if(level.Achieve15 == 1)
        {
            //If condition has been met the glow border is true
            Glow15.gameObject.SetActive(true);
        }

        ///////////////////////////////////////////////////////
        if(AvGate1 == MainGate)
        {
            //button is false
            Gbutton1.gameObject.SetActive(false);

            //glow border is false
            Glow1.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut1.gameObject.SetActive(false);

            //remove box
            Box1.gameObject.SetActive(false);

            //show award
        }
        if(AvGate2 == MainGate)
        {
            //button is false
            Gbutton2.gameObject.SetActive(false);

            //glow border is false
            Glow2.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut2.gameObject.SetActive(false);

            //remove box
            Box2.gameObject.SetActive(false);

            //show award
        }
        if(AvGate3 == MainGate)
        {
            //button is false
            Gbutton3.gameObject.SetActive(false);

            //glow border is false
            Glow3.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut3.gameObject.SetActive(false);

            //remove box
            Box3.gameObject.SetActive(false);

            //show award
        }
        if(AvGate4 == MainGate)
        {
            //button is false
            Gbutton4.gameObject.SetActive(false);

            //glow border is false
            Glow4.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut4.gameObject.SetActive(false);

            //remove box
            Box4.gameObject.SetActive(false);

            //show award
        }
        if(AvGate5 == MainGate)
        {
            //button is false
            Gbutton5.gameObject.SetActive(false);

            //glow border is false
            Glow5.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut5.gameObject.SetActive(false);

            //remove box
            Box5.gameObject.SetActive(false);

            //show award
        }
        if(AvGate6 == MainGate)
        {
            //button is false
            Gbutton6.gameObject.SetActive(false);

            //glow border is false
            Glow6.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut6.gameObject.SetActive(false);

            //remove box
            Box6.gameObject.SetActive(false);

            //show award
        }
        if(AvGate7 == MainGate)
        {
            //button is false
            Gbutton7.gameObject.SetActive(false);

            //glow border is false
            Glow7.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut7.gameObject.SetActive(false);

            //remove box
            Box7.gameObject.SetActive(false);

            //show award
        }
        if(AvGate8 == MainGate)
        {
            //button is false
            Gbutton8.gameObject.SetActive(false);

            //glow border is false
            Glow8.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut8.gameObject.SetActive(false);

            //remove box
            Box8.gameObject.SetActive(false);

            //show award
        }
        if(AvGate9 == MainGate)
        {
            //button is false
            Gbutton9.gameObject.SetActive(false);

            //glow border is false
            Glow9.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut9.gameObject.SetActive(false);

            //remove box
            Box9.gameObject.SetActive(false);

            //show award
        }
        if(AvGate10 == MainGate)
        {
            //button is false
            Gbutton10.gameObject.SetActive(false);

            //glow border is false
            Glow10.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut10.gameObject.SetActive(false);

            //remove box
            Box10.gameObject.SetActive(false);

            //show award
        }
        if(AvGate11 == MainGate)
        {
            //button is false
            Gbutton11.gameObject.SetActive(false);

            //glow border is false
            Glow11.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut11.gameObject.SetActive(false);

            //remove box
            Box11.gameObject.SetActive(false);

            //show award
        }
        if(AvGate12 == MainGate)
        {
            //button is false
            Gbutton12.gameObject.SetActive(false);

            //glow border is false
            Glow12.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut12.gameObject.SetActive(false);

            //remove box
            Box12.gameObject.SetActive(false);

            //show award
        }
        if(AvGate13 == MainGate)
        {
            //button is false
            Gbutton13.gameObject.SetActive(false);

            //glow border is false
            Glow13.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut13.gameObject.SetActive(false);

            //remove box
            Box13.gameObject.SetActive(false);

            //show award
        }
        if(AvGate14 == MainGate)
        {
            //button is false
            Gbutton14.gameObject.SetActive(false);

            //glow border is false
            Glow14.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut14.gameObject.SetActive(false);

            //remove box
            Box14.gameObject.SetActive(false);

            //show award
        }
        if(AvGate15 == MainGate)
        {
            //button is false
            Gbutton15.gameObject.SetActive(false);

            //glow border is false
            Glow15.gameObject.SetActive(false);

            //claimbutton is false
            ClaimBut15.gameObject.SetActive(false);

            //remove box
            Box15.gameObject.SetActive(false);

            //show award
        }
    }

    public void Claim1()
    {
        //if criteria has been met
        //AvGate is equal to 1
        AvGate1 = 1;
        
        //Save new AvGate

        //glow is off
        level.Achieve1 += 1;//remeber to save Acheve
        Glow1.gameObject.SetActive(false);

        //Play effect
        //Allocate Award
    }

    public void Ch1()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(true);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(true);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(true);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch2()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(true);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(true);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(true);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch3()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(true);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(true);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(true);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch4()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(true);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(true);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(true);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch5()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(true);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(true);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(true);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(true);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch6()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(true);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(true);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(true);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch7()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(true);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(true);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(true);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch8()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(true);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(true);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(true);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch9()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(true);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(true);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(true);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch10()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(true);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(true);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(true);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch11()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(true);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(true);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(true);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch12()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(true);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(true);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(true);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch13()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(true);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(true);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(true);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch14()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(true);//14
        Selected15.gameObject.SetActive(false);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(true);//14
        Box15.gameObject.SetActive(false);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(true);//14
        Info15.gameObject.SetActive(false);//15
    }

    public void Ch15()//Selectect to view Gift
    {
        Selected1.gameObject.SetActive(false);//1
        Selected2.gameObject.SetActive(false);//2
        Selected3.gameObject.SetActive(false);//3
        Selected4.gameObject.SetActive(false);//4
        Selected5.gameObject.SetActive(false);//5
        Selected6.gameObject.SetActive(false);//6
        Selected7.gameObject.SetActive(false);//7
        Selected8.gameObject.SetActive(false);//8
        Selected9.gameObject.SetActive(false);//9
        Selected10.gameObject.SetActive(false);//10
        Selected11.gameObject.SetActive(false);//11
        Selected12.gameObject.SetActive(false);//12
        Selected13.gameObject.SetActive(false);//13
        Selected14.gameObject.SetActive(false);//14
        Selected15.gameObject.SetActive(true);//15

        Box1.gameObject.SetActive(false);//1
        Box2.gameObject.SetActive(false);//2
        Box3.gameObject.SetActive(false);//3
        Box4.gameObject.SetActive(false);//4
        Box5.gameObject.SetActive(false);//5
        Box6.gameObject.SetActive(false);//6
        Box7.gameObject.SetActive(false);//7
        Box8.gameObject.SetActive(false);//8
        Box9.gameObject.SetActive(false);//9
        Box10.gameObject.SetActive(false);//10
        Box11.gameObject.SetActive(false);//11
        Box12.gameObject.SetActive(false);//12
        Box13.gameObject.SetActive(false);//13
        Box14.gameObject.SetActive(false);//14
        Box15.gameObject.SetActive(true);//15

        Info1.gameObject.SetActive(false);//1
        Info2.gameObject.SetActive(false);//2
        Info3.gameObject.SetActive(false);//3
        Info4.gameObject.SetActive(false);//4
        Info5.gameObject.SetActive(false);//5
        Info6.gameObject.SetActive(false);//6
        Info7.gameObject.SetActive(false);//7
        Info8.gameObject.SetActive(false);//8
        Info9.gameObject.SetActive(false);//9
        Info10.gameObject.SetActive(false);//10
        Info11.gameObject.SetActive(false);//11
        Info12.gameObject.SetActive(false);//12
        Info13.gameObject.SetActive(false);//13
        Info14.gameObject.SetActive(false);//14
        Info15.gameObject.SetActive(true);//15
    }
}
