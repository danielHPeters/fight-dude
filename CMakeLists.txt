cmake_minimum_required(VERSION 3.8)
project(fight_dude)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Engine.cpp Engine.h Input.cpp Input.h Game.cpp Game.h SplashScreen.cpp SplashScreen.h MainMenu.cpp MainMenu.h GameObject.cpp GameObject.h Paddle.cpp Paddle.h GameObjectManager.cpp GameObjectManager.h InputManager.cpp InputManager.h Ball.cpp Ball.h Item.cpp Item.h Entity.cpp Entity.h)
add_executable(fight_dude ${SOURCE_FILES})
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(fight_dude ${SFML_LIBRARIES})
endif ()
