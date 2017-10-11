//
// Created by daniel on 11.10.17.
//

#include "Game.h"
#include "SplashScreen.h"
#include "MainMenu.h"

void Game::start() {
  if (gameState != UNINITIALIZED) {
    return;
  }
  mainWindow.create(sf::VideoMode(1024, 768, 32), "Fight Dude");
  gameState = SHOWINGSPLASH;

  while (!isExiting()) {
    gameLoop();
  }
  mainWindow.close();
}

bool Game::isExiting() {
  return gameState == EXITING;
}

void Game::gameLoop() {
  switch (gameState) {
    case SHOWINGMENU: {
      showMenu();
      break;
    }
    case SHOWINGSPLASH: {
      showSplashScreen();
      break;
    }
    case PLAYING: {
      sf::Event currentEvent;

      while(mainWindow.pollEvent(currentEvent)) {
        mainWindow.clear(sf::Color(0, 0, 0));
        mainWindow.display();
        if (currentEvent.type == sf::Event::Closed) {
          gameState = EXITING;
        }
        if (currentEvent.type == sf::Event::KeyPressed){
          if(currentEvent.key.code == sf::Keyboard::Escape){
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
  gameState = SHOWINGMENU;
}

void Game::showMenu() {
  MainMenu mainMenu;
  MainMenu::MenuResult result = mainMenu.show(mainWindow);

  switch (result){
    case MainMenu::EXIT:{
      gameState = EXITING;
      break;
    }
    case MainMenu::PLAY:{
      gameState = PLAYING;
      break;
    }
    default:{
      break;
    }
  }
}

Game::GameState Game::gameState = UNINITIALIZED;
sf::RenderWindow Game::mainWindow;