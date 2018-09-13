#include "GameObjectManager.h"

GameObjectManager::GameObjectManager() : clock() {
}

GameObjectManager::~GameObjectManager() {
  std::for_each(gameObjects.begin(), gameObjects.end(), GameObjectDeallocator());
}

void GameObjectManager::add(std::string name, GameObject *gameObject) {
  gameObjects.insert(std::pair<std::string, GameObject *>(name, gameObject));
}

void GameObjectManager::remove(std::string name) {
  auto results = gameObjects.find(name);
  if (results != gameObjects.end()) {
    delete results->second;
    gameObjects.erase(results);
  }
}

GameObject *GameObjectManager::get(std::string name) const {
  auto results = gameObjects.find(name);
  return results == gameObjects.end() ? nullptr : results->second;
}

int GameObjectManager::getObjectCount() const {
  return (int) gameObjects.size();
}

void GameObjectManager::drawAll(sf::RenderWindow &renderWindow) {
  std::map<std::string, GameObject *>::const_iterator iterator = gameObjects.begin();

  while (iterator != gameObjects.end()) {
    iterator->second->draw(renderWindow);
    iterator++;
  }
}

void GameObjectManager::updateAll() {
  std::map<std::string, GameObject *>::const_iterator iterator = gameObjects.begin();

  float elapsedTime = clock.getElapsedTime().asSeconds();

  while (iterator != gameObjects.end()) {
    iterator->second->update(elapsedTime);
    iterator++;
  }
  clock.restart();
}
