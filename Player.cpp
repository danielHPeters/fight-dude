#include <utility>
#include "Player.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 * @param name
 */
Player::Player(std::string id, std::string createdAt, std::string updatedAt, std::string name)
    : Entity(std::move(id), std::move(createdAt), std::move(updatedAt)), name(std::move(name)) {}

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
std::uint64_t Player::getHighScore() const {
  return highScore;
}
} //namespace fightdude
