//
// Created by daniel on 11.10.17.
//

#include "Game.h"
#include "SplashScreen.h"
#include "MainMenu.h"

Game::Game() {
  gameState = Game::UNINITIALIZED;
  gameObjectManager;
}

void Game::start() {
  if (gameState != Game::UNINITIALIZED) {
    return;
  }
  mainWindow.create(sf::VideoMode(1024, 768, 32), "Fight Dude");

  Paddle * player1 = new Paddle();
  //player1->load("assets/game-objects/paddle.png");
  player1->setPosition(sf::Vector2<float>((1024 / 2) - 45, 700));

  gameObjectManager.add("paddle1", player1);

  gameState = Game::SHOWING_SPLASH;

  while (!isExiting()) {
    gameLoop();
  }
  mainWindow.close();
}

bool Game::isExiting() {
  return gameState == Game::EXITING;
}

void Game::gameLoop() {
  switch (gameState) {
    case Game::SHOWING_MENU: {
      showMenu();
      break;
    }
    case Game::SHOWING_SPLASH: {
      showSplashScreen();
      break;
    }
    case Game::PLAYING: {
      sf::Event currentEvent;

      while (mainWindow.pollEvent(currentEvent)) {
        mainWindow.clear(sf::Color(0, 0, 0));
        gameObjectManager.drawAll(mainWindow);
        mainWindow.display();
        if (currentEvent.type == sf::Event::Closed) {
          gameState = Game::EXITING;
        }
        if (currentEvent.type == sf::Event::KeyPressed) {
          if (currentEvent.key.code == sf::Keyboard::Escape) {
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

void Game::showSplashScreen() {
  SplashScreen splashScreen;
  splashScreen.show(mainWindow);
  gameState = Game::SHOWING_MENU;
}

void Game::showMenu() {
  MainMenu mainMenu;
  MainMenu::MenuResult result = mainMenu.show(mainWindow);

  switch (result) {
    case MainMenu::EXIT: {
      gameState = Game::EXITING;
      break;
    }
    case MainMenu::PLAY: {
      gameState = Game::PLAYING;
      break;
    }
    default: {
      break;
    }
  }
}