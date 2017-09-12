#version 120

varying vec2 texCoord;

void main()
{
    vec2 texcoord = gl_MultiTexCoord0.xy;
    
    // here we write texture coordinates that are sent to frag shader
    texCoord = vec2(texcoord.x, texcoord.y);
    
    // send the vertices to the fragment shader
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}