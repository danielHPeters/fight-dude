#include "InputManager.h"

namespace fightdude {
/**
 * Constructor.
 */
InputManager::InputManager() = default;

/**
 * Destructor.
 */
InputManager::~InputManager() = default;

/**
 * Getter for the keyboard device instance.
 *
 * @return Keyboard instance
 */
sf::Keyboard &InputManager::getKeyboard() {
  return keyboard;
}

/**
 * Getter for the mouse device instance.
 *
 * @return Mouse instance
 */
sf::Mouse &InputManager::getMouse() {
  return mouse;
}
} //namespace fightdude
