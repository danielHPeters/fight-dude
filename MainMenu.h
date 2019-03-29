#ifndef FIGHT_DUDE_MAINMENU_H
#define FIGHT_DUDE_MAINMENU_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <list>

namespace fightdude {
/**
 * Game main menu class.
 *
 * @author Daniel Peters
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
    MainMenu::MenuResult action;
  };

  MainMenu::MenuResult show(sf::RenderWindow &window);

 private:
  std::list<MenuItem> menuItems;

  MainMenu::MenuResult getMenuResponse(sf::RenderWindow &window);
  MainMenu::MenuResult handleClick(int x, int y);
};
} // namespace fightdude

#endif // FIGHT_DUDE_MAINMENU_H
