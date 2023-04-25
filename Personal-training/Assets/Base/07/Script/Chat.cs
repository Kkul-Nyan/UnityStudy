using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Chat : MonoBehaviour
{
    public static Chat instance;

    [Header("Base")]
    public TMP_InputField SendInput;
    public RectTransform ChatContent;
    public TextMeshProUGUI ChatText;
    public ScrollRect ChatScrollRect;
    private void Awake() {
        if(instance == null){
            instance = this;
        }
        else{
            Destroy(gameObject);
        }
    }

    public void ShowMessage(string data){
        ChatText.text += ChatText.text == "" ? data : "\n" + data;

        Fit(ChatText.GetComponent<RectTransform>());
        Fit(ChatContent);
        Invoke("ScrollDelay", 0.03f);
    }

    void Fit(RectTransform Rect) => LayoutRebuilder.ForceRebuildLayoutImmediate(Rect);

    void ScrollDelay() => ChatScrollRect.verticalScrollbar.value = 0;


    
}
