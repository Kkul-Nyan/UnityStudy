using Firebase;
using Firebase.Auth;
using Firebase.Extensions;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AuthManager : MonoBehaviour
{
    public bool IsFirebaseReady { get; private set; }
    public bool IsSignInOnProgress { get; private set; }

    public InputField emailField;
    public InputField passwordField;
    public Button signInButton;

    // static 을 쓴건 싱글톤으로 만드는게 맞는데, 간략하게 하기 위해 스태틱으로 고정.
    public static FirebaseApp firebaseApp;
    public static FirebaseAuth firebaseAuth;

    public static FirebaseUser User;

    public void Start()
    {
        //파이어베이스를 먼저 쓸수있는지 체크
        signInButton.interactable = false;
        //Dependency를 확인하,픽스해준다. 컨티뉴위트로 끝나고나서 할일을 바로 지정해준다.
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        {
            var result = task.Result;//task 결과값을 먼저 받아와준다

            if(result != DependencyStatus.Available)
            {
                Debug.LogError( message: result.ToString());
                IsFirebaseReady = false;
            }
            else
            {
                IsFirebaseReady = true;
                firebaseApp = FirebaseApp.DefaultInstance; //문제없으면 파이어배이스를 관리하는 객체를 가져와준다.
                firebaseAuth = FirebaseAuth.DefaultInstance;// 파이어베이스어스를 관리하는 객체를 가져온다.    
            }
            signInButton.interactable = IsFirebaseReady;
        }); 
    }

    public void SignIn()
    {    //파이어베이스가 준비가 안됬거나, 로그인 중이거나, 이미 로그인 된경우는 작동을 막는다.
        if (!IsFirebaseReady || IsSignInOnProgress || User != null)
        {
            return;
        }

        IsSignInOnProgress = true;
        signInButton.interactable = false;

        firebaseAuth.SignInWithEmailAndPasswordAsync(emailField.text, passwordField.text).ContinueWithOnMainThread
       (continuation: task => {

           Debug.Log(message: $"Sign in status : {task.Result}");

           IsSignInOnProgress = false;
           signInButton.interactable = true;

           if(task.IsFaulted)
           {
               Debug.LogError(task.Exception);
           }
           else if ( task.IsCanceled )
           {
               Debug.LogError(message: "Sign-in canceled");
           }
           else
           {
               User = task.Result;
               Debug.Log(User.Email);
               SceneManager.LoadScene("Lobby");
           }
       });

    }
}