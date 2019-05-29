#include <utility>
#include "Unit.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param fileName  Sprite filename
 * @param type      Unit type
 */
Unit::Unit(std::string id, std::string fileName, Unit::Type type)
    : GameEntity(std::move(id), std::move(fileName)), type(type) {}

/**
 * Destructor.
 */
Unit::~Unit() = default;

/**
 * Getter for the type of this unit.
 *
 * @return Unit type
 */
Unit::Type Unit::getType() const {
  return type;
}

/**
 * Unit render method.
 *
 * @param renderWindow Window on which the unit should be rendered
 */
void Unit::render(sf::RenderWindow &renderWindow) {
  GameEntity::render(renderWindow);
}

/**
 * Unit data update method.
 *
 * @param elapsedTime Time elapsed between this and last update
 */
void Unit::update(double elapsedTime) {
  GameEntity::update(elapsedTime);
}
} //namespace fightdude
