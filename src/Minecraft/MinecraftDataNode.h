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

    typedef string Texture;
    
    struct BlockType{
        int id;
        string name;
        Texture x1, x2, x3, x4, x5, x6;
        int durability;
    };

    struct Block{
        int x, y, z;
        BlockType Block;
    }; 

    struct Chunk{
        Block blocks[16][16][16];
    };
    //Struktura null blocków na bazie których będziemy 
    //definiować kolejne chunki biomy wioski etc

};

#endif // !MINECRAFT_DATA_NODE_H