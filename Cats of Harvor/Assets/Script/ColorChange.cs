using UnityEngine;

public class ColorChange : MonoBehaviour
{
    float changeColor = 1;  
    float timer = 0;

    private void Update() {

    }

    private void OnCollisionStay(Collision collision)
    {
        timer += Time.deltaTime;
        Renderer render;
        render = gameObject.GetComponent<Renderer>();
        bool cleanPlate = false; 

        if(collision.gameObject.tag == "cube" && changeColor <= 1 && timer > 2 )
        {
            Debug.Log("float changecolor : " + changeColor);
            changeColor -= 0.3f;
            Debug.Log("Enter");
            render.material.color = Color.LerpUnclamped(Color.white, Color.black, changeColor);
            timer =0;
        }
        else if (changeColor <=  0)
        {
            cleanPlate = true;
            Debug.Log("cleanPlate = " + cleanPlate);
        }
    }
}