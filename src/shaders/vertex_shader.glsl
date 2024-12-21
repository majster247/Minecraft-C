#version 330 core

// Input vertex position
layout(location = 0) in vec3 aPos;

// Matrices for transformations
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

// Output to fragment shader
out vec3 fragPos;

void main() {
    // Calculate the position in world space
    fragPos = vec3(model * vec4(aPos, 1.0));

    // Transform the vertex position to clip space
    gl_Position = projection * view * model * vec4(aPos, 1.0);
}
