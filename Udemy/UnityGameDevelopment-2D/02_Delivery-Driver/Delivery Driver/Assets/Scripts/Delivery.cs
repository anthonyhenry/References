using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Delivery : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "Package")
        {
            Debug.Log("Package out for delivery!");
        }
        else if(other.tag == "Customer")
        {
            Debug.Log("Package Delivered!");
        }
    }
}
