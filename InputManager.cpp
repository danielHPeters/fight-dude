#include "InputManager.h"

namespace fightdude {
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
