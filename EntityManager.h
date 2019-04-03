#ifndef FIGHT_DUDE_ENTITYMANAGER_H
#define FIGHT_DUDE_ENTITYMANAGER_H

#include <utility>
#include <map>
#include <string>
#include <SFML/System.hpp>
#include "GameEntity.h"


namespace fightdude {
/**
 * Game object manager class. Owns all GameEntity object references.
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
  /**
   * Deallocator for game entities.
   */
  struct GameEntityDeallocator {
    void operator()(const std::pair<std::string, GameEntity *> &p) const {
      delete p.second;
    }
  };

  std::map<std::string, GameEntity *> gameEntities;
  sf::Clock clock;
};
} //namespace fightdude

#endif //FIGHT_DUDE_ENTITYMANAGER_H
