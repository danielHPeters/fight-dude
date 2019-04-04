#include <utility>
#include "World.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param name
 * @param width
 * @param height
 */
World::World(std::string id, std::string fileName, std::string name, int width, int height)
    : GameEntity(std::move(id), std::move(fileName)), name(std::move(name)), size(Vector2<int>(width, height)) {}

/**
 * Destructor.
 */
World::~World() = default;
} //namespace fightdude
