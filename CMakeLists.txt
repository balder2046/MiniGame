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
    src/Npc.cpp
    src/World.cpp
    src/ObjectManager.cpp)
# 设置生成生成的目标
add_executable(MiniGame ${SRCS})
# 设置生成到哪里
set_target_properties(MiniGame PROPERTIES 
RUNTIME_OUTPUT_DIRECTORY_DEBUG ./bin
RUNTIME_OUTPUT_DIRECTORY_RELEASE ./bin
)
