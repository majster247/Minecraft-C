#version 330 core

// Inputs from vertex shader
in vec3 fragPos;

// Uniforms for light and color
uniform vec3 lightPos;   // Position of the light source
uniform vec3 lightColor; // Color of the light
uniform vec3 objectColor; // Color of the terrain object

// Camera position (for future use, e.g., specular lighting)
uniform vec3 viewPos;

// Output color
out vec4 FragColor;

void main() {
    // Calculate the light direction
    vec3 lightDir = normalize(lightPos - fragPos);

    // Calculate the diffuse intensity (simple Lambertian reflectance)
    float diff = max(dot(lightDir, vec3(0.0, 1.0, 0.0)), 0.0);

    // Combine diffuse lighting with object and light colors
    vec3 diffuse = diff * lightColor * objectColor;

    // Set the final fragment color
    FragColor = vec4(diffuse, 1.0);
}
