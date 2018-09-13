#ifndef FIGHT_DUDE_GAMEOBJECTMANAGER_H
#define FIGHT_DUDE_GAMEOBJECTMANAGER_H

#include "GameObject.h"
#include <stdlib.h>
#include <SFML/System.hpp>

/**
 * Game object manager class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class GameObjectManager {
 public:
  GameObjectManager();
  ~GameObjectManager();
  void add(std::string name, GameObject *gameObject);
  void remove(std::string name);
  GameObject *get(std::string name) const;
  int getObjectCount() const;
  void drawAll(sf::RenderWindow &renderWindow);
  void updateAll();

 private:
  struct GameObjectDeallocator {
    void operator()(const std::pair<std::string, GameObject *> &p) const {
      delete p.second;
    }
  };

  std::map<std::string, GameObject *> gameObjects;
  sf::Clock clock;
};

#endif //FIGHT_DUDE_GAMEOBJECTMANAGER_H
