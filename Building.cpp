#include <utility>
#include "Building.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 * @param name
 * @param fileName
 */
Building::Building(std::string id, std::string createdAt, std::string updatedAt, std::string name, std::string fileName)
    : GameEntity(std::move(id), std::move(createdAt), std::move(updatedAt), std::move(fileName)),
      name(std::move(name)) {}

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
} //namespace fightdude
