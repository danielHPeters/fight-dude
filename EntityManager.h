#ifndef FIGHT_DUDE_ENTITYMANAGER_H
#define FIGHT_DUDE_ENTITYMANAGER_H

#include <stdlib.h>
#include <SFML/System.hpp>
#include "GameEntity.h"

namespace fightdude {
/**
 * Game object manager class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class EntityManager {
 public:
  EntityManager();
  ~EntityManager();

  void add(const std::string &name, GameEntity *gameEntity);
  void remove(const std::string &name);
  GameEntity *get(const std::string &name) const;
  int getObjectCount() const;
  void drawAll(sf::RenderWindow &renderWindow);
  void updateAll();

 private:
  struct GameEntityDeallocator {
    void operator()(const std::pair<std::string, GameEntity *> &p) const {
      delete p.second;
    }
  };

  std::map<std::string, GameEntity *> gameEntities;
  sf::Clock clock;
};
} // namespace fightdude

#endif // FIGHT_DUDE_ENTITYMANAGER_H