#version 120

// https://github.com/maxillacult/ofxPostGlitch

// this is how we receive the texture (tex0 is the bound image so we don' have to pass explicitly)
uniform sampler2DRect tex0;

uniform float rand;

// this comes from the vertex shader
varying vec2 texCoord;




void main()
{

    
    vec2 pos = texCoord;
    
    // repeat
    pos *= 6.;
    pos = mod(pos,480.);
    
    // convergence effect
    vec4 col = texture2DRect(tex0,pos);
    vec4 col_r = texture2DRect(tex0,pos + vec2(-35.0*rand,0));
    vec4 col_l = texture2DRect(tex0,pos + vec2( 35.0*rand,0));
    vec4 col_g = texture2DRect(tex0,pos + vec2( -7.5*rand,0));
    
    
    col.b = col.b + col_r.b*max(1.0,sin(pos.y*1.2)*2.5)*rand;
    col.r = col.r + col_l.r*max(1.0,sin(pos.y*1.2)*2.5)*rand;
    col.g = col.g + col_g.g*max(1.0,sin(pos.y*1.2)*2.5)*rand;
    
    gl_FragColor.rgba = col.rgba;

}