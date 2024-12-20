#ifndef OPENGL_WINDOW_ENGINE_H
#define OPENGL_WINDOW_ENGINE_H


#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class OpenGL_GEW{
       
    
    public:
        OpenGL_GEW();
        ~OpenGL_GEW();
        
        GLFWwindow* window;
        
        void init();
        void createWindow(int width, int height, const char* title);
        void closeWindow();

        void input();
        void render();

    
};





#endif // !OPENGL_WINDOW_ENGINE_H