#include <utility>
#include "Building.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param name      Name of the building
 * @param fileName  Filename of the building sprite
 */
Building::Building(std::string id, std::string name, std::string fileName)
    : GameEntity(std::move(id), std::move(fileName)), name(std::move(name)) {}

/**
 * Destructor.
 */
Building::~Building() = default;

/**
 * Getter for the name of the building-
 *
 * @return Building name
 */
std::string Building::getName() const {
  return name;
}

/**
 *  Getter for the description of the building.
 *
 * @return Building description
 */
std::string Building::getDescription() const {
  return description;
}
} //namespace fightdude
