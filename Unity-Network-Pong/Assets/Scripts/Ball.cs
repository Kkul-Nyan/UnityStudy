using Photon.Pun;
using UnityEngine;

public class Ball : MonoBehaviourPun //포톤뷰컴포넌트로의 쇼트컷을 만들어준(바로 반응할수있게)
{
    //방장(호스트)인가를 체크한다. BAll을 방장이 생성하고 방장측에서만 움직이고, 다른 플레이어는 동기화를 통해 움직인다.
    public bool IsMasterClientLocal => PhotonNetwork.IsMasterClient && photonView.IsMine;

    private Vector2 direction = Vector2.right;
    private readonly float speed = 10f;
    private readonly float randomRefectionIntensity = 0.1f;
    
    private void FixedUpdate()
    {
        if (!IsMasterClientLocal || PhotonNetwork.PlayerList.Length <2) return;

        var distance = speed * Time.deltaTime;
        var hit = Physics2D.Raycast(transform.position, direction, distance);

        if(hit.collider != null)
        {
            var goalPost = hit.collider.GetComponent<Goalpost>();
            if(goalPost != null)
            {
                if (goalPost.playerNumber == 1)
                {
                    GameManager.Instance.AddScore(2, 1);
                }
                else if(goalPost.playerNumber ==2 )
                {
                    GameManager.Instance.AddScore(1, 1);
                }
            }

            direction = Vector2.Reflect(direction, hit.normal);
            direction += Random.insideUnitCircle * randomRefectionIntensity;
        }

        transform.position = (Vector2)transform.position + direction * distance;
    }
}