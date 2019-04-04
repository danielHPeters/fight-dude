#include <utility>
#include "Entity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 */
Entity::Entity(std::string id, std::string createdAt, std::string updatedAt)
    : id(std::move(id)), createdAt(std::move(createdAt)), updatedAt(std::move(updatedAt)) {}

/**
 * Destructor.
 */
Entity::~Entity() = default;

/**
 * Get id of entity.
 *
 * @return
 */
std::string Entity::getId() const {
  return id;
}

/**
 *
 * @return
 */
std::string Entity::getCreatedAt() const {
  return createdAt;
}

/**
 *
 * @return
 */
std::string Entity::getUpdatedAt() const {
  return updatedAt;
}
} //namespace fightdude
