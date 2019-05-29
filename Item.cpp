#include <utility>
#include "Item.h"

namespace fightdude {
/**
 *
 * @param id            Entity id
 * @param fileName      Sprite filename
 * @param name          Item name
 * @param description   Item description
 */
Item::Item(std::string id, std::string fileName, std::string name, std::string description)
    : GameEntity(std::move(id), std::move(fileName)), name(std::move(name)), description(std::move(description)) {}

/**
 * Destructor.
 */
Item::~Item() = default;

/**
 * Render item on a window.
 *
 * @param renderWindow Window to render the item on
 */
void Item::render(sf::RenderWindow &renderWindow) {
  GameEntity::render(renderWindow);
}

/**
 * Update internal item data.
 *
 * @param elapsedTime Time elapsed between this and last update
 */
void Item::update(double elapsedTime) {
  GameEntity::update(elapsedTime);
}

/**
 * Getter for the item name.
 *
 * @return Item name
 */
std::string Item::getName() const {
  return name;
}

/**
 * Getter for the item description.
 *
 * @return Item description
 */
std::string Item::getDescription() const {
  return description;
}
} //namespace fightdude
