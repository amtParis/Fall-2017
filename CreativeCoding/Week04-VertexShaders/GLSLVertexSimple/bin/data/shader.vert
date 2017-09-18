#version 120

varying vec4 globalColor;

// the time value is passed into the shader by the OF app.
uniform float time;

void main()
{
    vec4 position = gl_ModelViewProjectionMatrix * gl_Vertex;
    
    // alternatively the above can be written:
    // vec4 position = ftransform();
    
    // the sine wave travels along the x-axis (across the screen),
    // so we use the x coordinate of each vertex for the calculation,
    // but we displace all the vertex along the y axis (up the screen)/
    float displacementHeight = 80.0;
    float displacementY = sin(time + (position.x / 100.0)) * displacementHeight;
	
    vec4 modifiedPosition = position;
    vec3 normal = (gl_NormalMatrix * gl_Normal);
    modifiedPosition.xyz += normal * vec3(1,displacementY,1);
	//modifiedPosition.y += displacementY;
	
    gl_Position = modifiedPosition;
    
    // in OpenGL 2.0 we must get the global color using the gl_Color command,
    // and store it in a globalColor (varying) that is passed to our frag shader.
    // please note that the frag shader also has a globalColor (varying),
    // and this is the standard way of passing data from the vertex shader to the frag shader.
    globalColor = gl_Color;
}
