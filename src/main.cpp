#include "GameEngine/OPENGL-WINDOW-ENGINE.h"
#include "Minecraft/MinecraftDataNode.h"
#include "main.h"


#include <iostream>
#include <string>

struct GameInstance {
    OpenGL_GEW window;
    Minecraft minecraft;
};

// Function prototypes
void setupShadersAndTerrain(OpenGL_GEW& engine, unsigned int& shaderProgram, unsigned int& terrainVAO);

int main() {
    // Create a game instance
    GameInstance gameInstance;

    // Reference to game engine and Minecraft logic
    OpenGL_GEW& gameEngine = gameInstance.window;
    Minecraft& minecraft = gameInstance.minecraft;

    // Configure the game instance
    minecraft.graphicsAPI = "OpenGL";

    // Initialize the game engine and Minecraft logic
    gameEngine.init();
    minecraft.init();

    // Create the game window
    int windowWidth = 1280;
    int windowHeight = 720;
    std::string windowTitle = minecraft.gameName + " (" + minecraft.graphicsAPI + ") - " + minecraft.gameVersion;
    gameEngine.createWindow(windowWidth, windowHeight, windowTitle.c_str());

    // Load shaders and set up terrain
    unsigned int shaderProgram;
    unsigned int terrainVAO;
    setupShadersAndTerrain(gameEngine, shaderProgram, terrainVAO);

    // Set camera position
    gameEngine.setCamera(glm::vec3(0.0f, 5.0f, 20.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    // TODO: check camera creation and shaders loading

    // Start the render loop
    gameEngine.startRenderLoop([&]() {
        // Clear the screen
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Activate the shader program
        glUseProgram(shaderProgram);

        // Set the view and projection matrices
        glm::mat4 view = gameEngine.getViewMatrix();
        glm::mat4 projection = gameEngine.getProjectionMatrix(45.0f, static_cast<float>(windowWidth) / windowHeight, 0.1f, 100.0f);
        glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "view"), 1, GL_FALSE, glm::value_ptr(view));
        glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, GL_FALSE, glm::value_ptr(projection));

        // Set the model matrix for the terrain
        glm::mat4 model = glm::mat4(1.0f);
        glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, GL_FALSE, glm::value_ptr(model));

        // Render the terrain
        glBindVertexArray(terrainVAO);
        glDrawElements(GL_TRIANGLES, 6 * (10 - 1) * (10 - 1), GL_UNSIGNED_INT, 0);
        glBindVertexArray(0);
    });

    return 0;
}

// Helper function to load shaders and set up the terrain
void setupShadersAndTerrain(OpenGL_GEW& engine, unsigned int& shaderProgram, unsigned int& terrainVAO) {
    // Load shaders
    shaderProgram = loadShaders("shaders/vertexShader.glsl", "shaders/fragmentShader.glsl");//Check shaders path

    // Generate terrain
    terrainVAO = generateTerrain(10, 1.0f);
}
