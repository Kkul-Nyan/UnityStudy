using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;

public class InteractionManager : MonoBehaviour
{
    public float checkTime = 0.05f;
    float lastCheckTime;
    public float maxCheckDistance;
    Vector3 ScreenCenter = new Vector3(Screen.width/2, Screen.height/2, 0);
    public LayerMask layerMask;

    private Camera cam;
    public TextMeshProUGUI promptText;
    private GameObject curInteractGameObject;
    private IInteractable curInteractable;

    private void Start() {
        cam = Camera.main;
    }

    void Update(){
        if(Time.time - lastCheckTime > checkTime){
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
            else{
                curInteractable = null;
                curInteractGameObject =null;
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
            curInteractable.OnInteract(this.GetComponent<InventoryController>());
            curInteractGameObject = null;
            curInteractable = null;
            promptText.gameObject.SetActive(false);
        }
    }
}
