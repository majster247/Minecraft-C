#include "OPENGL-WINDOW-ENGINE.h"

using namespace std;

OpenGL_GEW::OpenGL_GEW(){
    // Constructor
    window = NULL;
}

OpenGL_GEW::~OpenGL_GEW(){
    // Destructor
}


void OpenGL_GEW::init(){
    // Initialize GLFW
    if(!glfwInit()){
        std::cout << "Failed to initialize GLFW" << std::endl;
        glfwTerminate();
    }
}

void OpenGL_GEW::createWindow(int width, int height, const char* title){
    // Create a window
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if(!window){
        cout << "Failed to create window" << endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);

    // Load GLAD
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        cout << "Failed to initialize GLAD" << endl;
        glfwTerminate();
    }

    // Set the viewport
    glViewport(0, 0, width, height);
}


void OpenGL_GEW::closeWindow(){
    // Close the window
    glfwDestroyWindow(window);
    glfwTerminate();
}

void OpenGL_GEW::input(){
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window, true);
    }
}


//Standard GLFW render loop for OpenGL game engine
void OpenGL_GEW::render(){
    while(!glfwWindowShouldClose(window)){
        OpenGL_GEW::input();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Close the window if the loop ends
    OpenGL_GEW::closeWindow();
}