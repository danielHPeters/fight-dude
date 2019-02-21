#include "ObjectManager.h"

ObjectManager::ObjectManager() : clock() {
}

ObjectManager::~ObjectManager() {
  std::for_each(gameObjects.begin(), gameObjects.end(), GameObjectDeallocator());
}

void ObjectManager::add(std::string name, GameEntity *gameObject) {
  gameObjects.insert(std::pair<std::string, GameEntity *>(name, gameObject));
}

void ObjectManager::remove(std::string name) {
  auto results = gameObjects.find(name);
  if (results != gameObjects.end()) {
    delete results->second;
    gameObjects.erase(results);
  }
}

GameEntity *ObjectManager::get(std::string name) const {
  auto results = gameObjects.find(name);
  return results == gameObjects.end() ? nullptr : results->second;
}

int ObjectManager::getObjectCount() const {
  return (int) gameObjects.size();
}

void ObjectManager::drawAll(sf::RenderWindow &renderWindow) {
  std::map<std::string, GameEntity *>::const_iterator iterator = gameObjects.begin();

  while (iterator != gameObjects.end()) {
    iterator->second->draw(renderWindow);
    iterator++;
  }
}

void ObjectManager::updateAll() {
  std::map<std::string, GameEntity *>::const_iterator iterator = gameObjects.begin();

  float elapsedTime = clock.getElapsedTime().asSeconds();

  while (iterator != gameObjects.end()) {
    iterator->second->update(elapsedTime);
    iterator++;
  }
  clock.restart();
}
