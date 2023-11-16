using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ROTATE : MonoBehaviour
{
    public int x_axis;
    public int y_axis;
    public int z_axis;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(x_axis, y_axis, z_axis * Time.deltaTime, Space.Self);
    }
}
