#include "Game.h"

int main(int argc,char *argv[]) {
  Game game;
  game.start();
  sf::RenderWindow mainWindow;
  mainWindow.create(sf::VideoMode(1024, 768), "Fight Dude");
  return 0;
}