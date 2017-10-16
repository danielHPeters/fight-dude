//
// Created by daniel on 13.10.17.
//

#ifndef FIGHT_DUDE_INPUTMANAGER_H
#define FIGHT_DUDE_INPUTMANAGER_H


#include <SFML/Window.hpp>

class InputManager {
public:
  sf::Keyboard &getKeyboard();
  sf::Mouse &getMouse();

private:
  sf::Keyboard keyboard;
  sf::Mouse mouse;
};


#endif //FIGHT_DUDE_INPUTMANAGER_H
