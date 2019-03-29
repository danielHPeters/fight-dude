#ifndef FIGHT_DUDE_INPUTMANAGER_H
#define FIGHT_DUDE_INPUTMANAGER_H

#include <SFML/Window.hpp>

namespace fightdude {
/**
 * Game input manager class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class InputManager {
 public:
  InputManager();
  ~InputManager();

  sf::Keyboard &getKeyboard();
  sf::Mouse &getMouse();

 private:
  sf::Keyboard keyboard;
  sf::Mouse mouse;
};
} // namespace fightdude

#endif // FIGHT_DUDE_INPUTMANAGER_H
