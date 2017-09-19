#version 120

uniform sampler2DRect tex0;
uniform float time;

varying vec2 texCoordVarying;

void main()
{
    // get the texture coordinates
    texCoordVarying = gl_MultiTexCoord0.xy;
    
    vec4 modifiedPosition = gl_Vertex;
    
    // we need to scale up the values we get from the texture
    float scale = 200;
    
    // here we get the red channel value from the texture
    // to use it as vertical displacement
    float displacementY = texture2DRect(tex0, texCoordVarying).x;
		
    // use the displacement we created from the texture data
    // to modify the vertex position
    modifiedPosition.z += displacementY * scale * (sin(time));

    // this is the resulting vertex position multiplied by the correct matrix
	gl_Position = gl_ModelViewProjectionMatrix * modifiedPosition;
}
