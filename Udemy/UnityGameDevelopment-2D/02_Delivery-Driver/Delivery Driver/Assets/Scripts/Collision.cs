using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collision : MonoBehaviour
{
    void OnCollisionEnter2D(Collision2D other) 
    {
        Debug.Log("Collision Detected!");
        Debug.Log(other);
    }

    void OnTriggerEnter2D(Collider2D other) 
    {
        Debug.Log("Trigger Detected");
    }
    void OnTriggerStay2D(Collider2D other) 
    {
        Debug.Log("Still in Trigger");
    }

    void OnTriggerExit2D(Collider2D other) 
    {
        Debug.Log("Leaving Trigger");
    }
}
