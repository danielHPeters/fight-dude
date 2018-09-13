#ifndef FIGHT_DUDE_INPUTMANAGER_H
#define FIGHT_DUDE_INPUTMANAGER_H

#include <SFML/Window.hpp>

/**
 * Game input manager class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class InputManager {
 public:
  sf::Keyboard &getKeyboard();
  sf::Mouse &getMouse();

 private:
  sf::Keyboard keyboard;
  sf::Mouse mouse;
};

#endif //FIGHT_DUDE_INPUTMANAGER_H
