//
// Created by daniel on 11.10.17.
//

#ifndef FIGHT_DUDE_GAME_H
#define FIGHT_DUDE_GAME_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Paddle.h"
#include "GameObjectManager.h"


class Game {
public:
  void start();

  Game();

private:
  bool isExiting();

  void gameLoop();

  void showSplashScreen();

  void showMenu();

  enum GameState {
    UNINITIALIZED, SHOWING_SPLASH, PAUSED, SHOWING_MENU, PLAYING, EXITING
  };
  GameState gameState;
  sf::RenderWindow mainWindow;
  GameObjectManager gameObjectManager;
};


#endif //FIGHT_DUDE_GAME_H
