#include "OPENGL-WINDOW-ENGINE.h"

OpenGL_GEW::OpenGL_GEW()
    : window(nullptr), cameraPos(0.0f, 0.0f, 3.0f), cameraFront(0.0f, 0.0f, -1.0f), cameraUp(0.0f, 1.0f, 0.0f),
      yaw(-90.0f), pitch(0.0f), fov(45.0f), lastX(800.0f / 2.0f), lastY(600.0f / 2.0f), firstMouse(true),
      deltaTime(0.0f), lastFrame(0.0f) {}

OpenGL_GEW::~OpenGL_GEW() {
    if (window) {
        glfwDestroyWindow(window);
    }
    glfwTerminate();
}

void OpenGL_GEW::init() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        exit(EXIT_FAILURE);
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void OpenGL_GEW::createWindow(int width, int height, const char* title) {
    window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        exit(EXIT_FAILURE);
    }

    glEnable(GL_DEPTH_TEST);
    glfwSetFramebufferSizeCallback(window, framebufferSizeCallback);
    glfwSetCursorPosCallback(window, mouseCallback);
    glfwSetScrollCallback(window, scrollCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
}

void OpenGL_GEW::setCallbacks() {
    glfwSetFramebufferSizeCallback(window, framebufferSizeCallback);
    glfwSetCursorPosCallback(window, mouseCallback);
    glfwSetScrollCallback(window, scrollCallback);
}

void OpenGL_GEW::startRenderLoop(const std::function<void()>& renderCallback) {
    while (!glfwWindowShouldClose(window)) {
        updateDeltaTime();
        processInput();

        // Clear screen
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // User-defined rendering logic
        renderCallback();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

void OpenGL_GEW::processInput() {
    float cameraSpeed = 2.5f * deltaTime;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        cameraPos += cameraSpeed * cameraFront;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        cameraPos -= cameraSpeed * cameraFront;
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
}

void OpenGL_GEW::setCamera(const glm::vec3& position, const glm::vec3& front, const glm::vec3& up) {
    cameraPos = position;
    cameraFront = front;
    cameraUp = up;
}

glm::mat4 OpenGL_GEW::getViewMatrix() const {
    return glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
}

glm::mat4 OpenGL_GEW::getProjectionMatrix(float fov, float aspect, float near, float far) const {
    return glm::perspective(glm::radians(fov), aspect, near, far);
}

// Static callback implementations
void OpenGL_GEW::framebufferSizeCallback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

void OpenGL_GEW::mouseCallback(GLFWwindow* window, double xpos, double ypos) {
    static OpenGL_GEW* engine = static_cast<OpenGL_GEW*>(glfwGetWindowUserPointer(window));
    if (!engine) return;

    if (engine->firstMouse) {
        engine->lastX = xpos;
        engine->lastY = ypos;
        engine->firstMouse = false;
    }

    float xoffset = xpos - engine->lastX;
    float yoffset = engine->lastY - ypos; // reversed since y-coordinates go from bottom to top
    engine->lastX = xpos;
    engine->lastY = ypos;

    float sensitivity = 0.1f;
    xoffset *= sensitivity;
    yoffset *= sensitivity;

    engine->yaw += xoffset;
    engine->pitch += yoffset;

    if (engine->pitch > 89.0f) engine->pitch = 89.0f;
    if (engine->pitch < -89.0f) engine->pitch = -89.0f;

    glm::vec3 front;
    front.x = cos(glm::radians(engine->yaw)) * cos(glm::radians(engine->pitch));
    front.y = sin(glm::radians(engine->pitch));
    front.z = sin(glm::radians(engine->yaw)) * cos(glm::radians(engine->pitch));
    engine->cameraFront = glm::normalize(front);
}

void OpenGL_GEW::scrollCallback(GLFWwindow* window, double xoffset, double yoffset) {
    static OpenGL_GEW* engine = static_cast<OpenGL_GEW*>(glfwGetWindowUserPointer(window));
    if (!engine) return;

    engine->fov -= (float)yoffset;
    if (engine->fov < 1.0f) engine->fov = 1.0f;
    if (engine->fov > 45.0f) engine->fov = 45.0f;
}

void OpenGL_GEW::updateDeltaTime() {
    float currentFrame = glfwGetTime();
    deltaTime = currentFrame - lastFrame;
    lastFrame = currentFrame;
}
