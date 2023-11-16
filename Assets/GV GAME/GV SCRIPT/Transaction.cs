using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Transaction : MonoBehaviour
{

    public int Price1;
    public Text price1;
    public GameObject P1;
    public int Price2;
    public Text price2;
    public GameObject P2;
    public int Price3;
    public Text price3;
    public GameObject P3;
    public int Price4;
    public Text price4;
    public GameObject P4;

    public GameObject item1;
    public GameObject item2;
    public GameObject item3;
    public GameObject item4;

    public GameObject info1;
    public GameObject info2;
    public GameObject info3;
    public GameObject info4;

    public int GatePrice = 1;

    public int price1gate;
    public int price2gate;
    public int price3gate;
    public int price4gate;

    public GameObject Buy1;
    public GameObject Buy2;
    public GameObject Buy3;
    public GameObject Buy4;

    public GameObject Equip1;
    public GameObject Equipped1;
    public GameObject Equip2;
    public GameObject Equipped2;
    public GameObject Equip3;
    public GameObject Equipped3;
    public GameObject Equip4;
    public GameObject Equipped4;

    public int EqInUse;
    public int EqUse1;
    public int EqUse2;
    public int EqUse3;
    public int EqUse4;

    public LevelGameSystem level;
    public GameObject NotEnough;
    public GameObject Effect;
    public EffectOff effectOff;
    public SoundManager sound;

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.HasKey("CashValue"))
        {
            level.Cash = PlayerPrefs.GetInt("CashValue");
        }
        if (PlayerPrefs.HasKey("Price2GateValue"))
        {
            price2gate = PlayerPrefs.GetInt("Price2GateValue");
        }
        if (PlayerPrefs.HasKey("Price3GateValue"))
        {
            price3gate = PlayerPrefs.GetInt("Price3GateValue");
        }
        if (PlayerPrefs.HasKey("Price4GateValue"))
        {
            price4gate = PlayerPrefs.GetInt("Price4GateValue");
        }
        ////////JUST BCUS
        if (PlayerPrefs.HasKey("Price1GateValue"))
        {
            price1gate = PlayerPrefs.GetInt("Price1GateValue");
        }
        if(price1gate == 0)
        {
            price1gate += 1;
            PlayerPrefs.SetInt("Price1GateValue", price1gate);
            PlayerPrefs.Save();
            level.GunInUse  += 1;
            EqInUse += 1;
        }
        //Load Gun Saved inUse
        if (PlayerPrefs.HasKey("GunInUseValue"))
        {
            level.GunInUse = PlayerPrefs.GetInt("GunInUseValue");
        }
        if (PlayerPrefs.HasKey("EqInUseValue"))
        {
            EqInUse = PlayerPrefs.GetInt("EqInUseValue");
        }
    }

    // Update is called once per frame
    void Update()
    {
        price1.text = "" + Price1;
        price2.text = "" + Price2;
        price3.text = "" + Price3;
        price4.text = "" + Price4;

        if(price1gate == GatePrice)
        {
            Buy1.gameObject.SetActive(false);
            P1.gameObject.SetActive(false);
            
        }
        if(price2gate == GatePrice)
        {
            Buy2.gameObject.SetActive(false);
            P2.gameObject.SetActive(false);
        }
        if(price3gate == GatePrice)
        {
            Buy3.gameObject.SetActive(false);
            P3.gameObject.SetActive(false);
        }
        if(price4gate == GatePrice)
        {
            Buy4.gameObject.SetActive(false);
            P4.gameObject.SetActive(false);
        }

        if(EqInUse == EqUse1)
        {
            Eq1();
        }
        if(EqInUse == EqUse2)
        {
            Eq2();
        }
        if(EqInUse == EqUse3)
        {
            Eq3();
        }
        if(EqInUse == EqUse4)
        {
            Eq4();
        }
    }
    public void SoundButton()
    {
        sound.PlaySound();
    }

    public void Eq1()//This will be used to equip item 1
    {
        if(price1gate == GatePrice)
        {
            Equip1.gameObject.SetActive(false);
            Equipped1.gameObject.SetActive(true);

            Equip2.gameObject.SetActive(true);
            Equipped2.gameObject.SetActive(false);

            Equip3.gameObject.SetActive(true);
            Equipped3.gameObject.SetActive(false);

            Equip4.gameObject.SetActive(true);
            Equipped4.gameObject.SetActive(false);

            //Switch to Gun to Use;
            level.GunInUse = 1;
            EqInUse = 1;
            //Save Gun InUse.
            PlayerPrefs.SetInt("GunInUseValue", level.GunInUse);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("EqInUseValue", EqInUse);
            PlayerPrefs.Save();
        }
    }

    public void Eq2()//This will be used to equip item 2
    {
        if(price2gate == GatePrice)
        {
            Equip1.gameObject.SetActive(true);
            Equipped1.gameObject.SetActive(false);

            Equip2.gameObject.SetActive(false);
            Equipped2.gameObject.SetActive(true);

            Equip3.gameObject.SetActive(true);
            Equipped3.gameObject.SetActive(false);

            Equip4.gameObject.SetActive(true);
            Equipped4.gameObject.SetActive(false);

            //Switch to Gun to Use;
            level.GunInUse = 2;
            EqInUse = 2;
            //Save Gun InUse.
            PlayerPrefs.SetInt("GunInUseValue", level.GunInUse);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("EqInUseValue", EqInUse);
            PlayerPrefs.Save();
        }
    }

    public void Eq3()//This will be used to equip item 3
    {
        if(price3gate == GatePrice)
        {
            Equip1.gameObject.SetActive(true);
            Equipped1.gameObject.SetActive(false);

            Equip2.gameObject.SetActive(true);
            Equipped2.gameObject.SetActive(false);

            Equip3.gameObject.SetActive(false);
            Equipped3.gameObject.SetActive(true);

            Equip4.gameObject.SetActive(true);
            Equipped4.gameObject.SetActive(false);

            //Switch to Gun to Use;
            level.GunInUse = 3;
            EqInUse = 3;
            //Save Gun InUse.
            PlayerPrefs.SetInt("GunInUseValue", level.GunInUse);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("EqInUseValue", EqInUse);
            PlayerPrefs.Save();
        }
    }

    public void Eq4()//This will be used to equip item 4
    {
        if(price4gate == GatePrice)
        {
            Equip1.gameObject.SetActive(true);
            Equipped1.gameObject.SetActive(false);

            Equip2.gameObject.SetActive(true);
            Equipped2.gameObject.SetActive(false);

            Equip3.gameObject.SetActive(true);
            Equipped3.gameObject.SetActive(false);

            Equip4.gameObject.SetActive(false);
            Equipped4.gameObject.SetActive(true);

            //Switch to Gun to Use;
            level.GunInUse = 4;
            EqInUse = 4;
            //Save Gun InUse.
            PlayerPrefs.SetInt("GunInUseValue", level.GunInUse);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("EqInUseValue", EqInUse);
            PlayerPrefs.Save();
        }
    }


    //NO NEED TO BUY GUN1 SINCE ITS ALREADY OWNED

    /*public void Purchase1()
    {
        if(level.Cash >= Price1)
        {
            Effect.gameObject.SetActive(true);
            effectOff.Clocked();
            level.Cash -= Price1;
            price1gate = 1;
            //Save new Cash and price gate
            PlayerPrefs.SetInt("CashValue", level.Cash);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("Price1GateValue", price1gate);
            PlayerPrefs.Save();
            ////////////////////////////////////////
            Eq1();
        }
        else
        {
            //Display Error: Price not met
            NotEnough.gameObject.SetActive(true);
        }
    }*/

    public void Purchase2()
    {
        if(level.Cash >= Price2)
        {
            Effect.gameObject.SetActive(true);
            effectOff.Clocked();
            level.Cash -= Price2;
            price2gate = 1;
            //Save new Cash and price gate
            PlayerPrefs.SetInt("CashValue", level.Cash);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("Price2GateValue", price2gate);
            PlayerPrefs.Save();
            ////////////////////////////////////////
            Eq2();
        }
        else
        {
            //Display Error: Price not met
            NotEnough.gameObject.SetActive(true);
        }
    }

    public void Purchase3()
    {
        if(level.Cash >= Price3)
        {
            Effect.gameObject.SetActive(true);
            effectOff.Clocked();
            level.Cash -= Price3;
            price3gate = 1;
            //Save new Cash and price gate
            PlayerPrefs.SetInt("CashValue", level.Cash);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("Price3GateValue", price3gate);
            PlayerPrefs.Save();
            ////////////////////////////////////////
            Eq3();
        }
        else
        {
            //Display Error: Price not met
            NotEnough.gameObject.SetActive(true);
        }
    }

    public void Purchase4()
    {
        if(level.Cash >= Price4)
        {
            Effect.gameObject.SetActive(true);
            effectOff.Clocked();
            level.Cash -= Price4;
            price4gate = 1;
            //Save new Cash and price gate
            PlayerPrefs.SetInt("CashValue", level.Cash);
            PlayerPrefs.Save();
            PlayerPrefs.SetInt("Price4GateValue", price4gate);
            PlayerPrefs.Save();
            ////////////////////////////////////////
            Eq4();
        }
        else
        {
            //Display Error: Price not met
            NotEnough.gameObject.SetActive(true);
        }
    }

    public void CloseNotEnough()
    {
        sound.PlaySound();
        NotEnough.gameObject.SetActive(false);
    }

    public void NXT1to2()
    {
        sound.PlaySound();
        item1.gameObject.SetActive(false);
        item2.gameObject.SetActive(true);
        item3.gameObject.SetActive(false);
        item4.gameObject.SetActive(false);

        info1.gameObject.SetActive(false);
        info2.gameObject.SetActive(true);
        info3.gameObject.SetActive(false);
        info4.gameObject.SetActive(false);
    }

    public void NXT2to3()
    {
        sound.PlaySound();
        item1.gameObject.SetActive(false);
        item2.gameObject.SetActive(false);
        item3.gameObject.SetActive(true);
        item4.gameObject.SetActive(false);

        info1.gameObject.SetActive(false);
        info2.gameObject.SetActive(false);
        info3.gameObject.SetActive(true);
        info4.gameObject.SetActive(false);
    }

    public void NXT3to4()
    {
        sound.PlaySound();
        item1.gameObject.SetActive(false);
        item2.gameObject.SetActive(false);
        item3.gameObject.SetActive(false);
        item4.gameObject.SetActive(true);

        info1.gameObject.SetActive(false);
        info2.gameObject.SetActive(false);
        info3.gameObject.SetActive(false);
        info4.gameObject.SetActive(true);
    }

    public void BCK4to3()
    {
        sound.PlaySound();
        item1.gameObject.SetActive(false);
        item2.gameObject.SetActive(false);
        item3.gameObject.SetActive(true);
        item4.gameObject.SetActive(false);

        info1.gameObject.SetActive(false);
        info2.gameObject.SetActive(false);
        info3.gameObject.SetActive(true);
        info4.gameObject.SetActive(false);
    }

    public void BCK3to2()
    {
        sound.PlaySound();
        item1.gameObject.SetActive(false);
        item2.gameObject.SetActive(true);
        item3.gameObject.SetActive(false);
        item4.gameObject.SetActive(false);

        info1.gameObject.SetActive(false);
        info2.gameObject.SetActive(true);
        info3.gameObject.SetActive(false);
        info4.gameObject.SetActive(false);
    }

    public void BCK2to1()//This will aslo be used for entering the Weaponry
    {
        sound.PlaySound();
        item1.gameObject.SetActive(true);
        item2.gameObject.SetActive(false);
        item3.gameObject.SetActive(false);
        item4.gameObject.SetActive(false);

        info1.gameObject.SetActive(true);
        info2.gameObject.SetActive(false);
        info3.gameObject.SetActive(false);
        info4.gameObject.SetActive(false);
    }

    public void ResetSaveData()
    {
        
    }
}
