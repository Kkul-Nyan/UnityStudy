public interface IInteractable
{
    string GetInteractPrompt();
    void OnInteract(InventoryController manager);
}