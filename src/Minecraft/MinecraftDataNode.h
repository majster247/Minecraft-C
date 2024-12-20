#ifndef MINECRAFT_DATA_NODE_H
#define MINECRAFT_DATA_NODE_H

#include <iostream>
#include <string>

using namespace std;

class Minecraft{
    public:
        Minecraft();
        ~Minecraft();

        void init();

        string gameVersion = "1.16.5";
        string gameName = "Minecraft C++ Version";
        string  graphicsAPI;

    struct Block{
        int x, y, z;
        char blockType[3];
    }; 
    //Struktura null blocków na bazie których będziemy 
    //definiować kolejne chunki biomy wioski etc

};

#endif // !MINECRAFT_DATA_NODE_H