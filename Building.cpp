#include <utility>

#include <utility>

#include <utility>

#include "Building.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param name
 * @param fileName
 */
Building::Building(std::string id, std::string name, std::string fileName)
    : GameEntity(std::move(id),
                 std::move(fileName)) {
  this->name = std::move(name);
}

/**
 * Destructor.
 */
Building::~Building() = default;

/**
 *
 * @return
 */
std::string Building::getName() const {
  return name;
}

/**
 *
 * @return
 */
std::string Building::getDescription() const {
  return description;
}
} // namespace fightdude
