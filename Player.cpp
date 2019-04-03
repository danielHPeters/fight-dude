#include <utility>
#include "Player.h"

namespace fightdude {
/**
 *
 * @param id
 * @param name
 */
Player::Player(std::string id, std::string name) : Entity(std::move(id)) {
  this->name = std::move(name);
}

/**
 * Destructor.
 */
Player::~Player() = default;

/**
 *
 * @return
 */
std::string Player::getName() const {
  return name;
}

/**
 *
 * @return
 */
uint64_t Player::getHighScore() const {
  return highScore;
}
} //namespace fightdude
