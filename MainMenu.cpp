#include "MainMenu.h"

namespace fightdude {
/**
 * MenuItem struct constructor.
 *
 * @param action Item action
 */
MainMenu::MenuItem::MenuItem(MainMenu::Action action) : action(action) {}

/**
 * Display the main menu.
 *
 * @param window    The window to draw the menu on
 * @return          Selected MainMenu::Action
 */
MainMenu::Action MainMenu::show(sf::RenderWindow &window) {
  sf::Texture texture;
  texture.loadFromFile("./../assets/menu/main-menu.png");
  sf::Sprite sprite(texture);

  MainMenu::MenuItem playButton(MainMenu::Action::PLAY);
  playButton.rect.top = 145;
  playButton.rect.height = 380;
  playButton.rect.left = 0;
  playButton.rect.width = 1023;

  MainMenu::MenuItem exitButton(MainMenu::Action::EXIT);
  exitButton.rect.top = 383;
  exitButton.rect.height = 560;
  exitButton.rect.left = 0;
  exitButton.rect.width = 1023;

  menuItems.push_back(playButton);
  menuItems.push_back(exitButton);

  window.draw(sprite);
  window.display();

  return getMenuResponse(window);
}

/**
 * Handle menu clicks.
 *
 * @param x Mouse click x
 * @param y Mouse click y
 * @return  Selected action
 */
MainMenu::Action MainMenu::handleClick(int x, int y) {
  for (auto &menuItem : menuItems) {
    sf::IntRect menuItemRect = menuItem.rect;

    if (menuItemRect.contains(sf::Vector2<int>(x, y))) {
      return menuItem.action;
    }
  }

  return MainMenu::Action::NONE;
}

/**
 * Menu click listener.
 *
 * @param window    The menu window
 * @return          Handle menu action
 */
MainMenu::Action MainMenu::getMenuResponse(sf::RenderWindow &window) {
  sf::Event menuEvent{};

  while (window.isOpen()) {
    while (window.pollEvent(menuEvent)) {
      if (menuEvent.type == sf::Event::EventType::MouseButtonPressed) {
        return handleClick(menuEvent.mouseButton.x, menuEvent.mouseButton.y);
      }

      if (menuEvent.type == sf::Event::EventType::Closed) {
        return MainMenu::Action::EXIT;
      }
    }
  }

  return MainMenu::Action::NONE;
}
} //namespace fightdude
