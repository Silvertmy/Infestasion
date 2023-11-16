using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class SwitchSFXtoggle : MonoBehaviour
{
    [SerializeField] RectTransform uiHandleRectTransform;
    [SerializeField] Color backgroundActiveColor;
    [SerializeField] Color handleActiveColor;
    
    Image backgroundImage, handleImage;
    Color backgroundDefaultColor, handleDefaultColor;
    Toggle toggle;

    public int Gate;

    Vector2 handlePosition;

    public SoundManager soundManager;
    bool isAnimating = false;

    private void Start() 
    {
        
    }

    void Awake()
    {
        if (PlayerPrefs.HasKey("SFXvalue"))
        {
            Gate = PlayerPrefs.GetInt("SFXvalue");
        }//This Saves the Music being Played 

        toggle = GetComponent<Toggle>();
        handlePosition = uiHandleRectTransform.anchoredPosition;
        backgroundImage = uiHandleRectTransform.parent.GetComponent<Image>();
        handleImage = uiHandleRectTransform.GetComponent<Image>();
        backgroundDefaultColor = backgroundImage.color;
        handleDefaultColor = handleImage.color;
        toggle.onValueChanged.AddListener(OnSwitch);

        /*if (toggle.isOn)
        {
            Gate = 1;
            //soundManager.PlayBackgroundMusic();
        }*/
        /////////////////////////////
        //This Handles the Gate switch for the Music
        if (Gate == 1)
        {
            toggle.isOn = true;
            OnSwitch(true);
        }
        if (Gate == 0)
        {
            toggle.isOn = false;
            OnSwitch(false);
        }
        ////////////////////////////
    }

    void OnSwitch(bool on)
    {
        if (isAnimating)
        {
            return; // Prevent multiple animations at the same time
        }

        StartCoroutine(AnimateToggle(on));
        ////////////////////////////////////////////////
        //This makes sure the gates save once dey are chosen...PLUS IT PICKS THE GATE:)
        if (!on)
        {
            soundManager.PauseAllSFX();
            Gate = 0;
        PlayerPrefs.SetInt("SFXvalue", Gate);
        PlayerPrefs.Save();
        }
        if(on)
        {
            soundManager.PlayAllSFX();
            Gate = 1;
        PlayerPrefs.SetInt("SFXvalue", Gate);
        PlayerPrefs.Save();
            
        }
    }

    IEnumerator AnimateToggle(bool on)
    {
        isAnimating = true;
        
        float duration = 0.12f; // Animation duration
        float elapsedTime = 0f;

        Vector2 startPos = uiHandleRectTransform.anchoredPosition;
        Vector2 endPos = on ? handlePosition * -1 : handlePosition;

        Color startBackgroundColor = backgroundImage.color;
        Color endBackgroundColor = on ? backgroundActiveColor : backgroundDefaultColor;

        Color startHandleColor = handleImage.color;
        Color endHandleColor = on ? handleActiveColor : handleDefaultColor;

        while (elapsedTime < duration)
        {
            elapsedTime += Time.unscaledDeltaTime; // Use unscaled time
            float t = Mathf.Clamp01(elapsedTime / duration);

            // Interpolate position
            uiHandleRectTransform.anchoredPosition = Vector2.Lerp(startPos, endPos, t);
            
            // Interpolate colors
            backgroundImage.color = Color.Lerp(startBackgroundColor, endBackgroundColor, t);
            handleImage.color = Color.Lerp(startHandleColor, endHandleColor, t);

            yield return null;
        }

        isAnimating = false;
    }

    void OnDestroy()
    {
        toggle.onValueChanged.RemoveListener(OnSwitch);
    }
}