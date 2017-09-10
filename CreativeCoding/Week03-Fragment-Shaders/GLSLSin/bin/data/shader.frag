#version 120

uniform vec2 u_resolution;
uniform float u_time;



void main()
{
    vec2 st = gl_FragCoord.st;
    
    float r = .5 * (sin(st.x/u_resolution.x+u_time*.5)+1.0);
    float g = .5 * (cos(st.x/u_resolution.x+u_time*.25)+1.0);
    float b = .5 * (sin(st.y/u_resolution.y+u_time*.15)+1.0);
   
    gl_FragColor = vec4(vec3(r, g, b), 1.0);

}