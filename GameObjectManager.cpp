//
// Created by daniel on 12.10.17.
//

#include "GameObjectManager.h"

GameObjectManager::GameObjectManager() {

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
  return results == gameObjects.end() ? NULL : results->second;
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