#ifndef FIGHT_DUDE_MAINMENU_H
#define FIGHT_DUDE_MAINMENU_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <list>

/**
 * Game main menu class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class MainMenu {
 public:
  enum MenuResult {
    NONE, EXIT, PLAY
  };

  struct MenuItem {
    explicit MenuItem(MenuResult action);
    sf::Rect<int> rect;
    MenuResult action;
  };

  MenuResult show(sf::RenderWindow &window);

 private:
  std::list<MenuItem> menuItems;

  MenuResult getMenuResponse(sf::RenderWindow &window);
  MenuResult handleClick(int x, int y);
};

#endif //FIGHT_DUDE_MAINMENU_H
