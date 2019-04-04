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
Item::Item(
    std::string id,
    std::string createdAt,
    std::string updatedAt,
    std::string fileName,
    std::string name,
    std::string description
) : GameEntity(std::move(id), std::move(createdAt), std::move(updatedAt), std::move(fileName)),
    name(std::move(name)),
    description(std::move(description)) {}

/**
 * Destructor.
 */
Item::~Item() = default;

/**
 *
 * @param renderWindow
 */
void Item::render(sf::RenderWindow &renderWindow) {
  GameEntity::render(renderWindow);
}

/**
 *
 * @param elapsedTime
 */
void Item::update(double elapsedTime) {
  GameEntity::update(elapsedTime);
}

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
