using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class JoystickShoot : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    /*Joy button for shooting */
    public Transform player;
    public float speed = 15.0f;

    private Image imgJoystickBg;
    private Image imgJoystick;
    private Vector2 posInput;

    public Transform circle;
    public Transform outerCircle;

    public ManagerJoyStick joymanager;
    
    public Weapon_2 weapon;

    private Vector2 startingPoint;
    private int leftTouch = 99;

    public void Start()
    {
        imgJoystickBg = GetComponent<Image>();
        imgJoystick = transform.GetChild(0).GetComponent<Image>();
    }
    // Update is called once per frame
    void Update () {
        int i = 0;
        while(i < Input.touchCount){
            Touch t = Input.GetTouch(i);
            Vector2 touchPos = getTouchPosition(t.position); // * -1 for perspective cameras
            if(t.phase == TouchPhase.Began){
                if(t.position.x > Screen.width / 2){
                    weapon.PointerDown();
                }else{
                    leftTouch = t.fingerId;
                    startingPoint = touchPos;
                }
            }
            else if(t.phase == TouchPhase.Moved && leftTouch == t.fingerId)
            {
                

            }
            else if(t.phase == TouchPhase.Ended && leftTouch == t.fingerId)
            {
                leftTouch = 99;
                weapon.PointerUp();
            }
            ++i;
        }

    }
    Vector2 getTouchPosition(Vector2 touchPosition){
        return GetComponent<Camera>().ScreenToWorldPoint(new Vector3(touchPosition.x, touchPosition.y, transform.position.z));
    }

    void moveCharacter(){
        
    }
    public void shootBullet(){
        
    }

    public void OnDrag(PointerEventData eventData)
    {
        if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
            imgJoystickBg.rectTransform,
            eventData.position, 
            eventData.pressEventCamera,
            out posInput))
        {
            posInput.x = posInput.x / (imgJoystickBg.rectTransform.sizeDelta.x);
            posInput.y = posInput.y / (imgJoystickBg.rectTransform.sizeDelta.y);
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

        }
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        posInput = Vector2.zero;
        imgJoystick.rectTransform.anchoredPosition = Vector2.zero;
    }

    

    public float inputHorizontal()
    {
        if(posInput.x != 0)
        {
            return posInput.x;
        }
        else 
        {
            return Input.GetAxis("Horizontal");
        }
    }

    public float inputVertical()
    {
        if(posInput.y != 0)
        {
            return posInput.y;
        }
        else 
        {
            return Input.GetAxis("Vertical");
        }
    }
}
