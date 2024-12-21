cmake_minimum_required(VERSION 3.10)

# Nazwa projektu
project(Minecraft-C)

# Ustawienie standardu C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Dodanie plików źródłowych
add_executable(Minecraft-C
    src/main.cpp
    src/GameEngine/OPENGL-WINDOW-ENGINE.cpp
    src/Minecraft/MinecraftDataNode.cpp
    
)

# Dodanie zależności
cmake_policy(SET CMP0072 NEW)
find_package(OpenGL REQUIRED)

# Dodanie GLM (lokalny katalog)
target_include_directories(Minecraft-C PUBLIC external/glm)

# Dodanie GLFW (lokalny katalog lub systemowy)
add_subdirectory(external/glfw) # Jeśli GLFW jest w katalogu `external`
# Jeśli używasz GLFW jako systemowej biblioteki, zamiast powyższej linii użyj:
# find_package(GLFW3 REQUIRED)
# target_link_libraries(Minecraft-C PUBLIC glfw)

add_library(GLAD external/glad/src/glad.c)
target_include_directories(GLAD PUBLIC external/glad/include)
target_link_libraries(Minecraft-C PUBLIC GLAD)


# Linkowanie bibliotek
target_link_libraries(Minecraft-C PUBLIC glfw OpenGL::GL)
