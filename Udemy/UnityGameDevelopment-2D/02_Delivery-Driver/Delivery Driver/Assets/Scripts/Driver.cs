using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Driver : MonoBehaviour
{
    [SerializeField] float steerSpeed = 200f;
    [SerializeField] float defaultSpeed = 10f;
    float moveSpeed;
    [SerializeField] float boostSpeed = 15f;
    [SerializeField] float slowSpeed = 5f;

    void Start() 
    {
        moveSpeed = defaultSpeed;
    }

    void OnCollisionEnter2D(Collision2D other) 
    {
        moveSpeed = slowSpeed;
        Debug.Log("Slowing");
    }

    void OnTriggerEnter2D(Collider2D other) 
    {
        if(other.tag == "Boost")
        {
            Debug.Log("Boosting");
            moveSpeed = boostSpeed;
        }
        else if(other.tag == "Obstacle")
        {
            moveSpeed = slowSpeed;
            Debug.Log("Slowing");
        }
    }

    void OnTriggerExit2D(Collider2D other) 
    {
        if(other.tag == "Obstacle")
        {
            moveSpeed =  defaultSpeed;
            Debug.Log("Returning to default speed");
        }    
    }

    // Update is called once per frame
    void Update()
    {
        float steerAmount = Input.GetAxis("Horizontal") * steerSpeed * Time.deltaTime;
        float moveAmount = Input.GetAxis("Vertical") * moveSpeed * Time.deltaTime;

		transform.Rotate(0, 0, -steerAmount);
        transform.Translate(0, moveAmount, 0);
    }
}
