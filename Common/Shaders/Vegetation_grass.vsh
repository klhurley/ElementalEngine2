#include "Shaders\HLSLconstants.h"
#include "Shaders\VSH_CommonFunctions.h"

struct appdata  {
	float3 Position			: POSITION;
	float3 Normal			: NORMAL;
	float4 Tangent			: TANGENT; 
    float2 TexCoord			: TEXCOORD0;   
    float2 TexCoord1		: TEXCOORD1;   
};

struct vpconn  {
	float4 HPosition		: POSITION;
	float2 TexCoord			: TEXCOORD0;
#if (ACTIVELIGHTS > 0)
	float4 TangentLight[ACTIVELIGHTS]	: TEXCOORD1;
#endif
	float4 PosOutDepth		:	COLOR0;
	float4 ViewVectorFog	:	TEXCOORD5;
#if (DETAILLIGHTS > 0 )
	float3 Normal			:	NORMAL;
#endif
};
	
uniform float3 EyePos	: register(c17);
uniform float4 FogDistance	: register(c18);
uniform float2 ZMinMax : register(c19);

vpconn main(appdata IN)
{
	vpconn OUT;	
	
	float4 pos;
	pos.xyz= IN.Position.xyz;
	pos.w = 1.0;
	OUT.PosOutDepth.xyz = pos.xyz;

	float4 tempPos;
	tempPos = mul(modelToWorld,pos);
	OUT.TexCoord.xy = IN.TexCoord.xy;
	OUT.HPosition = mul(worldToScreen, pos);

	//TBN Matrix
	float3x3 TBN = CalcTBNMatrix( IN.Tangent, IN.Normal );

	//Lights into Tangent Space
#if (ACTIVELIGHTS > 0)
	float3 lightdir[ACTIVELIGHTS];
	CalcLights( tempPos, TBN, lightdir, OUT.TangentLight );
#endif

	// calculate specular for first light
	//OUT.ViewVector.xyz = CalcSpecular( EyePos.xyz, tempPos.xyz, lightdir[0].xyz, TBN );
	OUT.ViewVectorFog.xyz = CalcViewVector( EyePos.xyz, tempPos.xyz, TBN );

	OUT.ViewVectorFog.w = CalcFog( OUT.HPosition.z, FogDistance.x, FogDistance.y );
	OUT.PosOutDepth.w = CalcZ( OUT.HPosition.z, ZMinMax.x, ZMinMax.y );
	
#if (DETAILLIGHTS > 0 )
	OUT.Normal = IN.Normal;
#endif
	return OUT;
}
