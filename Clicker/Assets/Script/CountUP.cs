using System.Collections;
using UnityEngine;

namespace MText
{
    public class CountUP : MonoBehaviour
    {
        [SerializeField] Modular3DText modular3DText = null;
        [Space]
        [SerializeField] int CountClick = 0;
        [SerializeField] float DoCount = 0;

        private void Update()
        {
            DoCount += Time.deltaTime;
        }
        public void OnClickButton()
        {
            if(CountClick < 1000 && DoCount >0.1f)
            {
            
                CountClick += 1;
                modular3DText.UpdateText(CountClick);
                DoCount = 0f;
                
            }
            else if(CountClick >=1000 && DoCount >0.1f)
            {
                CountClick = 0;
                DoCount = 0f;
            }
            else
            {
                return;
            }
        }
    }
}