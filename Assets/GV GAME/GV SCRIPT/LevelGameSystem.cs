using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelGameSystem : MonoBehaviour
{
    public int Level;
    public Text levelText;
    //for the Guns
    public int GunInUse;
    public int Gun1;
    public int Gun2;
    public int Gun3;
    public int Gun4;

    public GameObject GunObj1;
    public GameObject GunObj2;
    public GameObject GunObj3;
    public GameObject GunObj4;
    //
    public ZombieLife zombieLife;
    public GiantLife giantLife;

    public GameObject LevelComplete;
    public Animator DeathMenu;
    public GameObject deathmenu;
    public GameObject NxtMenu;
    public GameObject Dark; 
    public GameObject timedown;

    ////////////////////////////////////////////////////////
    public GameObject Notify;
    public int Achieve1, Achieve2, Achieve3, Achieve4, Achieve5, Achieve6, Achieve7, Achieve8, Achieve9, Achieve10, Achieve11, Achieve12, Achieve13, Achieve14, Achieve15;
    ////////////////////////////////////////////////////////
    
    public Animator OptionAnim;
     private bool isPaused = false;

    public GameObject Effect;

    private Animator[] anim;
    public int Cash;
    public Text cashpass;

    public int CashScore;
    public Text cashScoreText;
    public SoundManager sound;

    private void Start()
    {
        if (PlayerPrefs.HasKey("CashValue"))
        {
            Cash = PlayerPrefs.GetInt("CashValue");
        }
        if (PlayerPrefs.HasKey("GunInUseValue"))
        {
            GunInUse = PlayerPrefs.GetInt("GunInUseValue");
        }
        // Find the GameObject with a specific tag
        GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage"); // Replace "YourTag" with the tag you're looking for
        foreach (GameObject targetObject in targetObjects)
        {
            // Use GetComponent to get the Animator component attached to each GameObject
            Animator anim = targetObject.GetComponent<Animator>();

            if (anim != null)
            {
                // You now have access to each Animator component
                // No need to set the boolean parameter here
            }
            else
            {
                Debug.LogWarning("Animator component not found on an object with the specified tag.");
            }
        }
    }
    private void Awake()
    {
        Time.timeScale = 1f;
    }
    public void Update()
    {
        levelText.text = "LEVEL " + Level;
        cashpass.text = "" + Cash;
        cashScoreText.text = "+" + CashScore;
        ////////////////////////////////////////////////////////////////
        //GUN CHANGE
        if(GunInUse == Gun1)
        {
            GunObj1.gameObject.SetActive(true);
            GunObj2.gameObject.SetActive(false);
            GunObj3.gameObject.SetActive(false);
            GunObj4.gameObject.SetActive(false);
        }
        if(GunInUse == Gun2)
        {
            GunObj1.gameObject.SetActive(false);
            GunObj2.gameObject.SetActive(true);
            GunObj3.gameObject.SetActive(false);
            GunObj4.gameObject.SetActive(false);
        }
        if(GunInUse == Gun3)
        {
            GunObj1.gameObject.SetActive(false);
            GunObj2.gameObject.SetActive(false);
            GunObj3.gameObject.SetActive(true);
            GunObj4.gameObject.SetActive(false);
        }
        if(GunInUse == Gun4)
        {
            GunObj1.gameObject.SetActive(false);
            GunObj2.gameObject.SetActive(false);
            GunObj3.gameObject.SetActive(false);
            GunObj4.gameObject.SetActive(true);
        }

        ///////////////////////////////////////////////////////////////////////
        //REQUIREMENT FOR LEVEL COMPLETION

        if(Level == 1 || Level == 2 || Level == 3)
        {
            if(zombieLife.DeadZombies == 1)
            {
                //Animation for the Hostages
                GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage");

                foreach (GameObject targetObject in targetObjects)
                {
                    Animator anim = targetObject.GetComponent<Animator>();

                    if (anim != null)
                    {
                        anim.SetBool("Happy", true);
                    }
                }
                

                timedown.gameObject.SetActive(true);
                ///////////////////////////////////////////////////////
                //Scoring/Award
                CashScore = 500;
            }
        }

        if(Level == 4 || Level == 5 || Level == 6)
        {
            if(zombieLife.DeadZombies == 2)
            {
                //Animation for the Hostages
                //Animation for the Hostages
                GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage");

                foreach (GameObject targetObject in targetObjects)
                {
                    Animator anim = targetObject.GetComponent<Animator>();

                    if (anim != null)
                    {
                        anim.SetBool("Happy", true);
                    }
                }

                timedown.gameObject.SetActive(true);
                ///////////////////////////////////////////////////////
                //Scoring/Award
                CashScore = 1500;
            }

            //////////////////////////////////////////////////////////
            //ACHIEVEMENT
            //if Condition has been met:
            //Achieve1 equal to 1; then Save once you CLICK ON HOMEBUTTON
            //if Achieve equal to 1:
            //Notify is true;
        }

        if(Level == 7 || Level == 8)
        {
            if(giantLife.DeadZombies == 1)
            {
                //Animation for the Hostages
                //Animation for the Hostages
                GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage");

                foreach (GameObject targetObject in targetObjects)
                {
                    Animator anim = targetObject.GetComponent<Animator>();

                    if (anim != null)
                    {
                        anim.SetBool("Happy", true);
                    }
                }

                timedown.gameObject.SetActive(true);
                ///////////////////////////////////////////////////////
                //Scoring/Award
                CashScore = 1500;
            }
        }

        /////////////////////////////////////////////////////////////////////
        //LEVEL AWARDS
    }

    public void Menu()
    {
        Dark.gameObject.SetActive(true);
        Effect.gameObject.SetActive(true);
        LevelComplete.gameObject.SetActive(true);
        deathmenu.gameObject.SetActive(true);
    }

    public void Replay()
    {
        sound.PlaySound();
        //Replay Scene
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;

        // Reload the current scene
        SceneManager.LoadScene(currentSceneIndex);
    }

    public void SettingsOpen()
    {
        sound.PlaySound();
        //Pause Game
        Time.timeScale = 0;

        //Open Settings
        OptionAnim.SetBool("OPTIONS", true);
    }

    public void SettingsClose()
    {
        sound.PlaySound();
        //Pause Game
        Time.timeScale = 1;

        //Open Settings
        OptionAnim.SetBool("OPTIONS", false);
    }

    public void Home()
    {
        sound.PlaySound();
        //Go Back Home
        SceneManager.LoadScene("GAMEMENU");//Scene to Home;
    }

    public void BackToGame()
    {
        //Back to GamePlay
    }

    public void Claim()
    {
        //sound.buttonsound.Play();
        //Go to the Next LevelScene
        Cash += CashScore;

        //Save Cash
        PlayerPrefs.SetInt("CashValue", Cash);
        PlayerPrefs.Save();

        DeathMenu.SetBool("MENU", false);
        NxtMenu.gameObject.SetActive(true);
    }

    public void NextLevel()
    {
        sound.PlaySound();
        //SceneManager.LoadScene("TEST2");//Scene to the Next level;
    }

    public void TimesTwo()
    {
        sound.PlaySound();
        //For Ads...Watch Add to receive times 2.
        CashScore = 2 * CashScore;
    }

    public void Resetgame()
    {
        //RESET CASH
        //RESET LEVEL
        //RESET PURCHASES
        //RESEY WEAPON
    }
}
