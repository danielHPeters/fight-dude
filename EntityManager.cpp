#include "EntityManager.h"

namespace fightdude {
/**
 * Constructor.
 */
EntityManager::EntityManager() : clock() {}

/**
 * Destructor.
 */
EntityManager::~EntityManager() {
  std::for_each(entities.begin(), entities.end(), GameEntityDeallocator());
}

/**
 * Add a managed entity.
 *
 * @param name          Entity name
 * @param gameEntity    Pointer to game entity
 */
void EntityManager::add(const std::string &name, GameEntity *gameEntity) {
  entities.insert(std::pair<std::string, GameEntity *>(name, gameEntity));
}

/**
 * Remove a managed entity.
 *
 * @param name  Entity name
 */
void EntityManager::remove(const std::string &name) {
  auto results = entities.find(name);

  if (results != entities.end()) {
    delete results->second;
    entities.erase(results);
  }
}

/**
 * Get an entity by name.
 *
 * @param name  Name of the entity
 * @return      The found entity or nullptr when not found
 */
GameEntity *EntityManager::get(const std::string &name) const {
  auto results = entities.find(name);

  return results == entities.end() ? nullptr : results->second;
}

/**
 * Get the number of objects in this EntityManager.
 *
 * @return Number of objects
 */
std::size_t EntityManager::getObjectCount() const {
  return entities.size();
}

/**
 * Render all entities.
 *
 * @param renderWindow Window to render the entities on
 */
void EntityManager::drawAll(sf::RenderWindow &renderWindow) {
  auto iterator = entities.begin();

  while (iterator != entities.end()) {
    iterator->second->render(renderWindow);
    iterator++;
  }
}

/**
 * Update all entities.
 */
void EntityManager::updateAll() {
  auto iterator = entities.begin();

  float elapsedTime = clock.getElapsedTime().asSeconds();

  while (iterator != entities.end()) {
    iterator->second->update(elapsedTime);
    iterator++;
  }
  clock.restart();
}
} //namespace fightdude
