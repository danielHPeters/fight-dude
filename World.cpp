#include <utility>
#include "World.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param fileName  Sprite filename
 * @param name      World name
 * @param width     World width
 * @param height    World height
 */
World::World(
    std::string id,
    std::string fileName,
    std::string name,
    std::int32_t width,
    std::int32_t height
) : GameEntity(std::move(id), std::move(fileName)),
    name(std::move(name)),
    size(width, height) {}

/**
 * Destructor.
 */
World::~World() = default;
} //namespace fightdude
