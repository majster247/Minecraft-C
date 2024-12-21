#ifndef OPENGL_WINDOW_ENGINE_H
#define OPENGL_WINDOW_ENGINE_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>
#include <string>
#include <functional>

class OpenGL_GEW {
public:
    OpenGL_GEW();
    ~OpenGL_GEW();

    // Core methods
    void init(); 
    void createWindow(int width, int height, const char* title);
    void setCallbacks(); 
    void startRenderLoop(const std::function<void()>& renderCallback); 

    // Utility methods
    void processInput(); 
    void setCamera(const glm::vec3& position, const glm::vec3& front, const glm::vec3& up);
    glm::mat4 getViewMatrix() const; 
    glm::mat4 getProjectionMatrix(float fov, float aspect, float near, float far) const;

    // Input callbacks
    static void framebufferSizeCallback(GLFWwindow* window, int width, int height);
    static void mouseCallback(GLFWwindow* window, double xpos, double ypos);
    static void scrollCallback(GLFWwindow* window, double xoffset, double yoffset);

    // Window accessor
    GLFWwindow* getWindow() const { return window; }

private:
    GLFWwindow* window;

    // Camera properties
    glm::vec3 cameraPos;
    glm::vec3 cameraFront;
    glm::vec3 cameraUp;
    float yaw, pitch, fov;
    float lastX, lastY;
    bool firstMouse;

    // Delta time
    float deltaTime, lastFrame;

    // Internal methods
    void updateDeltaTime();
};

#endif // OPENGL_WINDOW_ENGINE_H
