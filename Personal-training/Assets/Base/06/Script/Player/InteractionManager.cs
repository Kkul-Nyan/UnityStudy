using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;

public class InteractionManager : MonoBehaviour
{
    public float checkRate = 0.05f;
    private float lastCheckTime;
    public float maxCheckDistance;
    Vector3 ScreenCenter = new Vector3(Screen.width/2, Screen.height/2, 0);
    public LayerMask layerMask;

    private GameObject curInteractGameObject;
    private IInteractable curInteractable;
    public TextMeshProUGUI promptText;
    private Camera cam;
    
    private void Start() {
        cam = Camera.main;
    }

    private void Update() {
        if(Time.time - lastCheckTime > checkRate){
            lastCheckTime = Time.time;

            Ray ray = cam.ScreenPointToRay(ScreenCenter);
            RaycastHit hit;
            if(Physics.Raycast(ray, out hit, maxCheckDistance, layerMask)){
                if(hit.collider.gameObject != curInteractGameObject){
                    curInteractGameObject = hit.collider.gameObject;
                    curInteractable = hit.collider.GetComponent<IInteractable>();
                    SetPromptText();
                }
            }
            else {
                curInteractGameObject = null;
                curInteractable = null;
                promptText.gameObject.SetActive(false);
            }
        }
    }

    void SetPromptText() {
        promptText.gameObject.SetActive(true);
        promptText.text = string.Format("<b>[E]</b> {0}", curInteractable.GetInteractPrompt());
    }

    public void OnInteractInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Started && curInteractable != null){
            curInteractable.OnInteract();
            curInteractGameObject = null;
            curInteractable = null;
            promptText.gameObject.SetActive(false);
        }
    }
}

public interface IInteractable
{
    string GetInteractPrompt();
    void OnInteract();
}