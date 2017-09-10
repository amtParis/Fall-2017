#version 120

// this is how we receive the texture (tex0 is the bound image so we don' have to pass explicitly)
uniform sampler2DRect tex0;

// this comes from the vertex shader
varying vec2 texCoordVarying;

// sent from of app
uniform vec2 u_mouse;
uniform vec2 u_resolution;

void main()
{
    
    vec4 color = texture2DRect(tex0, texCoordVarying);
    //vec2 st = gl_FragCoord.st / 800.0;
    //float pct = length( (vec2(.5)-st) );
    
    vec2 st = gl_FragCoord.st / u_resolution;
    
    // scale mouse values to 0 to 1
    vec2 s_mouse = u_mouse/u_resolution;
    
    // find aspect ratio of resolution so we get a circulare pattern instead of ellipse if screen not square
    // scale by .25 to make smaller circle (change this vaue to experiment with other sizes)
    vec2 s_res = vec2(u_resolution.y/u_resolution.x,u_resolution.y/u_resolution.y) * .5;
    
    // calculate values based on distance to mouse
    float pct = length( (s_mouse-st) / s_res );
    
    // shape value
    pct = pow(pct,5.25);//pct*pct;

    // increase brightness on all channels (if we comment out this line everything stays the same)
    //color.rgb *= 1.25;
    vec4 colorA = vec4(0.0,0.0,0.0,1.0);
    color = colorA*pct + (1.0-pct)*color;//mix(colorA,colorB,vec3(c,c,c));
    
    
    gl_FragColor = color;

}