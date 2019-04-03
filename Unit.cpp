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
Unit::Unit(std::string id, std::string fileName, Unit::Type type)
    : GameEntity(std::move(id), std::move(fileName)), type(type) {}

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
} //namespace fightdude
