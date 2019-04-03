#ifndef FIGHT_DUDE_MAINMENU_H
#define FIGHT_DUDE_MAINMENU_H

#include <list>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

namespace fightdude {
/**
 * Game main menu class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class MainMenu {
 public:
  enum Action {
    NONE, EXIT, PLAY
  };

  struct MenuItem {
    explicit MenuItem(MainMenu::Action action);
    sf::Rect<int> rect;
    MainMenu::Action action;
  };

  MainMenu::Action show(sf::RenderWindow &window);

 private:
  std::list<MainMenu::MenuItem> menuItems;

  MainMenu::Action getMenuResponse(sf::RenderWindow &window);
  MainMenu::Action handleClick(int x, int y);
};
} //namespace fightdude

#endif //FIGHT_DUDE_MAINMENU_H
