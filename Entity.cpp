#include <utility>
#include "Entity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 */
Entity::Entity(std::string id): id(std::move(id)) {}

/**
 * Destructor.
 */
Entity::~Entity() = default;

/**
 * Getter for the entity id.
 *
 * @return Entity id
 */
std::string Entity::getId() const {
  return id;
}
} //namespace fightdude
