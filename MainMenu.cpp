//
// Created by daniel on 11.10.17.
//

#include "MainMenu.h"

MainMenu::MenuResult MainMenu::show(sf::RenderWindow &window) {
  sf::Texture texture;
  texture.loadFromFile("assets/menu/main-menu.png");
  sf::Sprite sprite(texture);

  MenuItem playButton;
  playButton.rect.top = 145;
  playButton.rect.height = 380;
  playButton.rect.left = 0;
  playButton.rect.width = 1023;
  playButton.action = MainMenu::PLAY;

  MenuItem exitButton;
  exitButton.rect.top = 383;
  exitButton.rect.height = 560;
  exitButton.rect.left = 0;
  exitButton.rect.width = 1023;
  exitButton.action = MainMenu::EXIT;

  menuItems.push_back(playButton);
  menuItems.push_back(exitButton);

  window.draw(sprite);
   window.display();

  return getMenuResponse(window);
}

MainMenu::MenuResult MainMenu::handleClick(int x, int y) {
  std::list<MenuItem>::iterator iterator;

  for (iterator = menuItems.begin(); iterator != menuItems.end(); iterator++) {
    sf::Rect<int> menuItemRect = (*iterator).rect;

    if (menuItemRect.contains(sf::Vector2<int>(x, y))) {
      return (*iterator).action;
    }
  }

  return MainMenu::NONE;
}

MainMenu::MenuResult MainMenu::getMenuResponse(sf::RenderWindow &window) {
  sf::Event menuEvent;

  while(window.isOpen()) {
    while (window.pollEvent(menuEvent)) {
      if (menuEvent.type == sf::Event::MouseButtonPressed) {
        return handleClick(menuEvent.mouseButton.x, menuEvent.mouseButton.y);
      }
      if (menuEvent.type == sf::Event::Closed) {
        return MainMenu::EXIT;
      }
    }
  }
}