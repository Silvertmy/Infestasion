using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ManagerControlRot : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    private Image areaofattack, stick;
    private Vector2 posOut;

    public Weapon_2 weapon;

    // Start is called before the first frame update
    void Start()
    {
        areaofattack = GetComponent<Image>();
        stick = transform.GetChild(0).GetComponent<Image>();

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnDrag(PointerEventData eventData)
    {
        if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
            areaofattack.rectTransform,
            eventData.position, 
            eventData.pressEventCamera,
            out posOut))
        {

            Debug.Log(posOut.x.ToString() + "/" + posOut.y.ToString());
            
            stick.rectTransform.anchoredPosition = new Vector2(
                posOut.x * (stick.rectTransform.sizeDelta.x /80),
                posOut.y * (stick.rectTransform.sizeDelta.y / 80)
            );
            /*posInput.x = posInput.x / (imgJoystickBg.rectTransform.sizeDelta.x);
            posInput.y = posInput.y / (imgJoystickBg.rectTransform.siz50eDelta.y);
            Debug.Log(posInput.x.ToString() + "/" + posInput.y.ToString()); 


            //normalize
            if(posInput.magnitude > 1.0f)
            {
                posInput = posInput.normalized;
            }


            // joystick move
            imgJoystick.rectTransform.anchoredPosition = new Vector2(
                posInput.x * (imgJoystickBg.rectTransform.sizeDelta.x / 3),
                posInput.y * (imgJoystickBg.rectTransform.sizeDelta.y / 3));
*/
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
        weapon.PointerDown();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        stick.rectTransform.anchoredPosition = Vector2.zero;
        weapon.PointerUp();
    }

    public float InputRotHorizon()
    {
       if(posOut.x != 0)
        return posOut.x;
        else
        return 0;
    }

    public float InputRotVertical()
    {
        if(posOut.y != 0)
        return posOut.y;
        else
        return 0;
    }
}
