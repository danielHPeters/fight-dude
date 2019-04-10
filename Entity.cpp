#include <utility>
#include "Entity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 */
Entity::Entity(std::string id, std::string createdAt, std::string updatedAt)
    : id(std::move(id)), createdAt(std::move(createdAt)), updatedAt(std::move(updatedAt)) {}

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

/**
 * Getter for the create timestamp of the entity.
 *
 * @return Create timestamp
 */
std::string Entity::getCreatedAt() const {
  return createdAt;
}

/**
 * Getter for the update timestamp of the entity.
 *
 * @return Update timestamp
 */
std::string Entity::getUpdatedAt() const {
  return updatedAt;
}
} //namespace fightdude
