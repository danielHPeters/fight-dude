cmake_minimum_required(VERSION 3.8)
project(fight_dude)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Engine.cpp Engine.h InputState.cpp InputState.h Game.cpp Game.h SplashScreen.cpp SplashScreen.h MainMenu.cpp MainMenu.h GameEntity.cpp GameEntity.h Paddle.cpp Paddle.h EntityManager.cpp EntityManager.h InputManager.cpp InputManager.h Ball.cpp Ball.h Item.cpp Item.h Entity.cpp Entity.h Player.cpp Player.h Building.cpp Building.h Selection.cpp Selection.h AudioData.cpp AudioData.h Rectangle.cpp Rectangle.h Vector2.cpp Vector2.h Shape.cpp Shape.h Unit.cpp Unit.h World.cpp World.h User.cpp User.h File.cpp File.h Ability.cpp Ability.h Point.cpp Point.h QuadTree.cpp QuadTree.h Serializable.cpp Serializable.h Serializer.cpp Serializer.h Scene.h EmptyScene.cpp EmptyScene.h Component.cpp Component.h Transformation.cpp Transformation.h Renderer.cpp Renderer.h Material.cpp Material.h Mesh.cpp Mesh.h SceneRenderer.cpp SceneRenderer.h Behaviour.cpp Behaviour.h EventDispatcher.cpp EventDispatcher.h Event.cpp Event.h Window.cpp Window.h)
add_executable(fight_dude ${SOURCE_FILES})
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(fight_dude ${SFML_LIBRARIES})
endif ()
