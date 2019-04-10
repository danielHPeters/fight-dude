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
  std::for_each(gameEntities.begin(), gameEntities.end(), GameEntityDeallocator());
}

/**
 * Add a managed entity.
 *
 * @param name          Entity name
 * @param gameEntity    Pointer to game entity
 */
void EntityManager::add(const std::string &name, GameEntity *gameEntity) {
  gameEntities.insert(std::pair<std::string, GameEntity *>(name, gameEntity));
}

/**
 * Remove a managed entity.
 *
 * @param name  Entity name
 */
void EntityManager::remove(const std::string &name) {
  auto results = gameEntities.find(name);

  if (results != gameEntities.end()) {
    delete results->second;
    gameEntities.erase(results);
  }
}

/**
 * Get an entity by name.
 *
 * @param name  Name of the entity
 * @return      The found entity or nullptr when not found
 */
GameEntity *EntityManager::get(const std::string &name) const {
  auto results = gameEntities.find(name);

  return results == gameEntities.end() ? nullptr : results->second;
}

/**
 * Get the number of objects in this EntityManager.
 *
 * @return Number of objects
 */
std::size_t EntityManager::getObjectCount() const {
  return gameEntities.size();
}

/**
 * Render all entities.
 *
 * @param renderWindow Window to render the entities on
 */
void EntityManager::drawAll(sf::RenderWindow &renderWindow) {
  auto iterator = gameEntities.begin();

  while (iterator != gameEntities.end()) {
    iterator->second->render(renderWindow);
    iterator++;
  }
}

/**
 * Update all entities.
 */
void EntityManager::updateAll() {
  auto iterator = gameEntities.begin();

  float elapsedTime = clock.getElapsedTime().asSeconds();

  while (iterator != gameEntities.end()) {
    iterator->second->update(elapsedTime);
    iterator++;
  }
  clock.restart();
}
} //namespace fightdude
