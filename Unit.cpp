#include <utility>
#include "Unit.h"

namespace fightdude {

/**
 * Constructor.
 *
 * @param id
 * @param fileName
 * @param type
 */
Unit::Unit(std::string id, std::string createdAt, std::string updatedAt, std::string fileName, Unit::Type type)
    : GameEntity(std::move(id), std::move(createdAt), std::move(updatedAt), std::move(fileName)), type(type) {}

/**
 * Destructor.
 */
Unit::~Unit() = default;

/**
 *
 * @return
 */
Unit::Type Unit::getType() const {
  return type;
}

/**
 *
 * @param renderWindow
 */
void Unit::render(sf::RenderWindow &renderWindow) {
  GameEntity::render(renderWindow);
}

/**
 *
 * @param elapsedTime
 */
void Unit::update(double elapsedTime) {
  GameEntity::update(elapsedTime);
}
} //namespace fightdude
