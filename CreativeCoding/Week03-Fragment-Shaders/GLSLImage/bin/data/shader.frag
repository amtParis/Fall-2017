#version 120

// this is how we receive the texture (tex0 is the bound image so we don' have to pass explicitly)
uniform sampler2DRect tex0;

// this comes from the vertex shader
varying vec2 texCoordVarying;

void main()
{
    vec4 color = texture2DRect(tex0, texCoordVarying);
    
    // increase brightness on all channels (if we comment out this line everything stays the same)
    color.rgb *= 1.25;
    
    gl_FragColor = color;

}