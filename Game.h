#ifndef FIGHT_DUDE_GAME_H
#define FIGHT_DUDE_GAME_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Paddle.h"
#include "EntityManager.h"
#include "InputManager.h"

namespace fightdude {
/**
 * Main game class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Game {
 public:
  void start();
  Game();
  ~Game();
  InputManager getInputManager();
  sf::RenderWindow &getWindow();

 private:
  enum GameState {
    UNINITIALIZED, SHOWING_SPLASH, PAUSED, SHOWING_MENU, PLAYING, EXITING
  };

  GameState gameState;
  sf::RenderWindow mainWindow;
  EntityManager gameObjectManager;
  InputManager inputManager{};

  bool isExiting();
  void gameLoop();
  void showSplashScreen();
  void showMenu();
};
} // namespace fightdude

#endif //FIGHT_DUDE_GAME_H
