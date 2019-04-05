#include <utility>
#include "World.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 * @param fileName
 * @param name
 * @param width
 * @param height
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
