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
 * @param name
 * @param gameEntity
 */
void EntityManager::add(const std::string &name, GameEntity *gameEntity) {
  gameEntities.insert(std::pair<std::string, GameEntity *>(name, gameEntity));
}

/**
 * Remove a managed entity.
 *
 * @param name
 */
void EntityManager::remove(const std::string &name) {
  auto results = gameEntities.find(name);

  if (results != gameEntities.end()) {
    delete results->second;
    gameEntities.erase(results);
  }
}

/**
 * Get entity.
 *
 * @param name
 * @return
 */
GameEntity *EntityManager::get(const std::string &name) const {
  auto results = gameEntities.find(name);
  return results == gameEntities.end() ? nullptr : results->second;
}

/**
 *
 * @return Number of objects
 */
int EntityManager::getObjectCount() const {
  return gameEntities.size();
}

/**
 * Render all entities.
 *
 * @param renderWindow
 */
void EntityManager::drawAll(sf::RenderWindow &renderWindow) {
  std::map<std::string, GameEntity *>::const_iterator iterator = gameEntities.begin();

  while (iterator != gameEntities.end()) {
    iterator->second->render(renderWindow);
    iterator++;
  }
}

/**
 * Update all entities.
 */
void EntityManager::updateAll() {
  std::map<std::string, GameEntity *>::const_iterator iterator = gameEntities.begin();

  float elapsedTime = clock.getElapsedTime().asSeconds();

  while (iterator != gameEntities.end()) {
    iterator->second->update(elapsedTime);
    iterator++;
  }
  clock.restart();
}
} // namespace fightdude
