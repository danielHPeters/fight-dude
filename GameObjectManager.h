//
// Created by daniel on 12.10.17.
//

#ifndef FIGHT_DUDE_GAMEOBJECTMANAGER_H
#define FIGHT_DUDE_GAMEOBJECTMANAGER_H

#include "GameObject.h"
#include <stdlib.h>
#include <SFML/System.hpp>

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
  std::map<std::string, GameObject *> gameObjects;
  sf::Clock clock;

  struct GameObjectDeallocator {
    void operator()(const std::pair<std::string, GameObject *> &p) const {
      delete p.second;
    }
  };

};


#endif //FIGHT_DUDE_GAMEOBJECTMANAGER_H
