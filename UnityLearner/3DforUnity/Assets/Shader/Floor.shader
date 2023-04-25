Shader "Custom/Floor"
{
    Properties
    {   
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Glossiness("Smoothness", Range(0,1)) = 0.5
        _Metallic("Metallic", Range(0,1)) = 0.0
        _R("R", Range(0,1)) = 1
        _G("G", Range(0,1)) = 1
        _B("B", Range(0,1)) = 1
        _BW("BW", Range(-1,1)) = 1

    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
       
        #pragma surface surf Standard


        #pragma target 3.0

        sampler2D _MainTex;

        struct Input
        {
            float2 uv_MainTex;
        };

        half _Glossiness;
        half _Metallic;
        float _R;
        float _G;
        float _B;
        float _BW;

        void surf (Input IN, inout SurfaceOutputStandard o)
        {
      
            fixed4 c = tex2D (_MainTex, float2(IN.uv_MainTex.x +_Time.x , IN.uv_MainTex.y - _Time.x));
            
            
            o.Albedo = float3(c.r * _R, c.g * _G, c.b * _B) + _BW;

            o.Metallic = _Metallic;
            o.Smoothness = _Glossiness;
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
