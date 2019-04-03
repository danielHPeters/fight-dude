#include <utility>
#include "Entity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param name
 * @param description
 */
Entity::Entity(std::string id) : id(std::move(id)) {}

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
} //namespace fightdude
