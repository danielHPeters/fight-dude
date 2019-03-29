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
 *
 * @return
 */
sf::Keyboard &InputManager::getKeyboard() {
  return keyboard;
}

/**
 *
 * @return
 */
sf::Mouse &InputManager::getMouse() {
  return mouse;
}
} // namespace fightdude
