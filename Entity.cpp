#include "Entity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param name
 * @param description
 */
Entity::Entity(std::string id, std::string name, std::string description)
    : id(std::move(id)), name(std::move(name)), description(std::move(description)) {
}

/**
 * Destructor.
 */
Entity::~Entity() = default;

/**
 * Get id of entity.
 *
 * @return
 */
std::string Entity::getId() {
  return id;
}

/**
 * Get name of entity.
 *
 * @return
 */
std::string Entity::getName() {
  return name;
}

/**
 * Get description of entity.
 *
 * @return
 */
std::string Entity::getDescription() {
  return description;
}
} // namespace fightdude
