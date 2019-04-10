#include <utility>
#include "Player.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 * @param name      Player name
 */
Player::Player(std::string id, std::string createdAt, std::string updatedAt, std::string name)
    : Entity(std::move(id), std::move(createdAt), std::move(updatedAt)), name(std::move(name)) {}

/**
 * Destructor.
 */
Player::~Player() = default;

/**
 * Getter for the player name.
 *
 * @return Player name
 */
std::string Player::getName() const {
  return name;
}

/**
 * Getter for player high score
 *
 * @return Player high score
 */
std::uint64_t Player::getHighScore() const {
  return highScore;
}
} //namespace fightdude
