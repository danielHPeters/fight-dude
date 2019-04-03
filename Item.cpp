#include <utility>
#include "Item.h"

namespace fightdude {
/**
 *
 * @param id
 * @param fileName
 * @param name
 * @param description
 */
Item::Item(std::string id, std::string fileName, std::string name, std::string description)
    : GameEntity(std::move(id), std::move(fileName)), name(std::move(name)), description(std::move(description)) {}

/**
 * Destructor.
 */
Item::~Item() = default;

/**
 *
 * @return
 */
std::string Item::getName() const {
  return name;
}

/**
 *
 * @return
 */
std::string Item::getDescription() const {
  return description;
}
} //namespace fightdude
