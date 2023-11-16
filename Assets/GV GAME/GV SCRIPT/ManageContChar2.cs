using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManageContChar2 : MonoBehaviour
{
    public CharacterController _charController;
    public Animator _animator;
    public ManagerJoyStick _mngrJoystick;
    private float inputX, inputY;
    private Vector3 posMove, posRotation;
    public float moveSpeed;

    public Transform meshChar;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        inputX = _mngrJoystick.inputHorizontal();
        inputY = _mngrJoystick.inputVertical();

        if(inputX !=0 || inputY !=0)
        {
            _animator.SetBool("RUN", true);
        }
        else
        {
            _animator.SetBool("RUN", false);
        }


        posMove = new Vector3 (inputX * moveSpeed, 0, inputY * moveSpeed);
        _charController.Move(posMove);
    }
}
