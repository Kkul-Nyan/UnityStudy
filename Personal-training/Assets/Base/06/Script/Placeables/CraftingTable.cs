using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CraftingTable : Building, IInteractable
{
    private CraftingWindow craftingWindow;
    private PlayerController06 player;

    private void Start() {
        craftingWindow = FindObjectOfType<CraftingWindow>(true);
        player = FindObjectOfType<PlayerController06>();
    }
    public string GetInteractPrompt(){
        return "Craft";
    }
    public void OnInteract(){
        craftingWindow.gameObject.SetActive(true);
        player.ToggleCursor(true);
    }
}
