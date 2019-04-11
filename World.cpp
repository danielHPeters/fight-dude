#include <utility>
#include "World.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 * @param fileName  Sprite filename
 * @param name      World name
 * @param width     World width
 * @param height    World height
 */
World::World(
    std::string id,
    std::string createdAt,
    std::string updatedAt,
    std::string fileName,
    std::string name,
    std::int32_t width,
    std::int32_t height
) : GameEntity(std::move(id), std::move(createdAt), std::move(updatedAt), std::move(fileName)),
    name(std::move(name)),
    size(width, height) {}

/**
 * Destructor.
 */
World::~World() = default;
} //namespace fightdude
