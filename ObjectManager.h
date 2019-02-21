#ifndef FIGHT_DUDE_OBJECTMANAGER_H
#define FIGHT_DUDE_OBJECTMANAGER_H

#include "GameEntity.h"
#include <stdlib.h>
#include <SFML/System.hpp>

/**
 * Game object manager class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class ObjectManager {
 public:
  ObjectManager();
  ~ObjectManager();
  void add(std::string name, GameEntity *gameObject);
  void remove(std::string name);
  GameEntity *get(std::string name) const;
  int getObjectCount() const;
  void drawAll(sf::RenderWindow &renderWindow);
  void updateAll();

 private:
  struct GameObjectDeallocator {
    void operator()(const std::pair<std::string, GameEntity *> &p) const {
      delete p.second;
    }
  };

  std::map<std::string, GameEntity *> gameObjects;
  sf::Clock clock;
};

#endif //FIGHT_DUDE_OBJECTMANAGER_H
