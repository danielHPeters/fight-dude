#include <cassert>
#include <utility>
#include "Ball.h"

namespace fightdude {
/**
 * Constructor. Loads sprite. Throws assertion error if the sprite wasn't loaded.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 * @param fileName
 */
Ball::Ball(std::string id, std::string createdAt, std::string updatedAt, std::string fileName)
    : GameEntity(std::move(id), std::move(updatedAt), std::move(updatedAt), std::move(fileName)) {
  load();
  assert(isLoaded());
  getSprite().setOrigin(0, 0);
}

/**
 * Destructor.
 */
Ball::~Ball() = default;
} //namespace fightdude
