#version 150

// these are for the programmable pipeline system
uniform mat4 modelViewProjectionMatrix;
in vec4 position;
in vec4 normal;

// the time value is passed into the shader by the OF app.
uniform float time;


void main()
{
    // the sine wave travels along the x-axis (across the screen),
    // so we use the x coordinate of each vertex for the calculation,
    // but we displace all the vertex along the y axis (up the screen)/
    float displacementHeight = 80.0;
    float displacementY = sin(time + (position.x / 80.0)) * displacementHeight;

    vec4 modifiedPosition = modelViewProjectionMatrix * position;
    modifiedPosition.xyz += normal.xyz * vec3(1.0,displacementY,1.0);

    gl_Position = modifiedPosition;
}

