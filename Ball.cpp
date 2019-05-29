#include <cassert>
#include <utility>
#include "Ball.h"

namespace fightdude {
/**
 * Constructor. Loads sprite. Throws assertion error if the sprite wasn't loaded.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 * @param fileName  Sprite file name
 */
Ball::Ball(std::string id, std::string fileName)
    : GameEntity(std::move(id), std::move(fileName)) {
  load();
  assert(isLoaded());
  getSprite().setOrigin(0, 0);
}

/**
 * Destructor.
 */
Ball::~Ball() = default;
} //namespace fightdude
