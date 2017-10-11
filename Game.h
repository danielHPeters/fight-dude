//
// Created by daniel on 11.10.17.
//

#ifndef FIGHT_DUDE_GAME_H
#define FIGHT_DUDE_GAME_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class Game {
public:
  static void start();

private:
  static bool isExiting();

  static void gameLoop();
  static void showSplashScreen();
  static void showMenu();

  enum GameState {
    UNINITIALIZED, SHOWINGSPLASH, PAUSED, SHOWINGMENU, PLAYING, EXITING
  };
  static GameState gameState;
  static sf::RenderWindow mainWindow;
};


#endif //FIGHT_DUDE_GAME_H
