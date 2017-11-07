Shader "Unlit/noiseDisplace"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_BlendPct ("BlendPct", float) = 0.0

	}
	SubShader
	{
		Tags { "RenderType"="Opaque" }
		LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog
			
			#include "UnityCG.cginc"
			#include "Noise/ClassicNoise2D.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				float4 color : COLOR;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				UNITY_FOG_COORDS(1)
				float4 vertex : SV_POSITION;
				float4 color : COLOR;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float _BlendPct;

			v2f vert (appdata v)
			{

				v2f o;

				float2 coord = v.uv;
                float2 period = 2.0;
                float w = 2.5;

                //v.vertex.xy += cnoise(coord) * w;
				v.vertex.y += _BlendPct * ( (cnoise(_Time*v.color.rg*2+v.vertex.xy)+.5f) ) ;
				

				//v.vertex.y += sin(_Time.y);//.01 * _Time.y;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.color = v.color;

				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				UNITY_TRANSFER_FOG(o,o.vertex);
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture
				fixed4 col = i.color;//tex2D(_MainTex, i.uv);
				// apply fog
				UNITY_APPLY_FOG(i.fogCoord, col);
				return col;
			}
			ENDCG
		}
	}
}
