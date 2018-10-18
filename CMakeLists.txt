cmake_minimum_required(VERSION 2.9)

project(MiniGame)


# 设置要编译的文件
set(SRCS src/MiniGame.cpp
    src/ObjectBase.cpp
    src/MapObject.cpp
    src/DynamicObject.cpp
    src/Character.cpp
    src/Player.cpp
    src/Item.cpp
    src/Npc.cpp)

add_executable(MiniGame ${SRCS})
set_target_properties(MiniGame PROPERTIES 
RUNTIME_OUTPUT_DIRECTORY_DEBUG ./bin
RUNTIME_OUTPUT_DIRECTORY_RELEASE ./bin
)
