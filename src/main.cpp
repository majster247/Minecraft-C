#include "GameEngine/OPENGL-WINDOW-ENGINE.h"
#include "Minecraft/MinecraftDataNode.h"
#include <iostream>
#include <string>

struct GameInstance{
    OpenGL_GEW window;
    Minecraft minecraft;
};


using namespace std;

int main() {
    GameInstance gameInstance;
    OpenGL_GEW gameEngine = gameInstance.window;
    Minecraft minecraft = gameInstance.minecraft;


    minecraft.graphicsAPI = "OpenGL";

    gameEngine.init();
    minecraft.init();

    gameEngine.createWindow(800, 600, (minecraft.gameName + " ("+minecraft.graphicsAPI+") - " + minecraft.gameVersion).c_str());



    gameEngine.render();
    return 0;
}
    
