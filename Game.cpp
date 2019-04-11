#include "Game.h"
#include "SplashScreen.h"
#include "MainMenu.h"
#include "Ball.h"

namespace fightdude {
/**
 * Constructor. Sets game state to Game::State::UNINITIALIZED
 */
Game::Game(): gameState(Game::State::UNINITIALIZED) {}

/**
 * Destructor.
 */
Game::~Game() = default;

/**
 * Start the game.
 */
void Game::start() {
  if (gameState == Game::State::UNINITIALIZED) {
    mainWindow.create(sf::VideoMode(1024, 768, 32), "Fight Dude");

    auto *ball = new Ball("1", "", "", "./../assets/game-objects/ball.png");
    auto *player1 = new Paddle("2", "", "", "./../assets/game-objects/paddle.png");

    player1->setPosition(sf::Vector2f((1024.0f / 2.0f) - 45.0f, 700.0f));
    ball->setPosition(sf::Vector2f(1024.0f / 2.0f, (768.0f / 2.0f) - 15.0f));
    entityManager.add("ball", ball);
    entityManager.add("paddle1", player1);
    gameState = Game::State::SHOWING_SPLASH;

    while (!isExiting()) {
      gameLoop();
    }
    mainWindow.close();
  }
}

/**
 * Check if game exit is requested.
 *
 * @return True if game state is set to Game::State::EXITING
 */
bool Game::isExiting() {
  return gameState == Game::State::EXITING;
}

/**
 * Main game loop.
 */
void Game::gameLoop() {
  switch (gameState) {
    case Game::State::SHOWING_MENU: {
      showMenu();
      break;
    }
    case Game::State::SHOWING_SPLASH: {
      showSplashScreen();
      break;
    }
    case Game::State::PLAYING: {
      sf::Event currentEvent{};

      while (mainWindow.pollEvent(currentEvent)) {
        mainWindow.clear(sf::Color(0, 0, 0));
        entityManager.drawAll(mainWindow);
        entityManager.updateAll();
        mainWindow.display();

        if (currentEvent.type == sf::Event::EventType::Closed) {
          gameState = Game::State::EXITING;
        }

        if (currentEvent.type == sf::Event::EventType::KeyPressed) {
          if (currentEvent.key.code == sf::Keyboard::Key::Escape) {
            showMenu();
          }
        }
      }
      break;
    }
    default: {
      break;
    }
  }
}

/**
 * Show splash screen.
 */
void Game::showSplashScreen() {
  SplashScreen::show(mainWindow);
  gameState = Game::State::SHOWING_MENU;
}

/**
 * Show main menu.
 */
void Game::showMenu() {
  MainMenu mainMenu;
  MainMenu::Action result = mainMenu.show(mainWindow);

  switch (result) {
    case MainMenu::Action::EXIT: {
      gameState = Game::State::EXITING;
      break;
    }
    case MainMenu::Action::PLAY: {
      gameState = Game::State::PLAYING;
      break;
    }
    default: {
      break;
    }
  }
}

/**
 * Getter for the game input manager
 *
 * @return The game input manager
 */
InputManager Game::getInputManager() {
  return inputManager;
}

/**
 *  Getter for the main game window.
 *
 * @return Main game window
 */
sf::RenderWindow &Game::getWindow() {
  return mainWindow;
}
} //namespace fightdude
