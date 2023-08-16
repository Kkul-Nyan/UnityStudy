 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemGrid : MonoBehaviour
{
    public float tileSizeWidth = 32;
    public float tileSizeHeight = 32;

    RectTransform rectTransform;

    void Start(){
        rectTransform = GetComponent<RectTransform>();
    }
    Vector2 positionTheGrid = new Vector2();
    Vector2Int tileGridPosition = new Vector2Int();
    public Vector2 GetGridPosition(Vector2 mousePosition){
        positionTheGrid.x = mousePosition.x - rectTransform.position.x;
        positionTheGrid.y = rectTransform.position.y - mousePosition.y;

        tileGridPosition.x = (int)(positionTheGrid.x / tileSizeWidth);
        tileGridPosition.y = (int)(positionTheGrid.y / tileSizeHeight);

        return tileGridPosition;
    }
}
