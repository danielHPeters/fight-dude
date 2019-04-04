#ifndef FIGHT_DUDE_WORLD_H
#define FIGHT_DUDE_WORLD_H

#include <string>
#include "Entity.h"
#include "GameEntity.h"
#include "Vector2.h"
#include "EntityManager.h"

namespace fightdude {
class World : GameEntity {
  World(std::string id, std::string fileName, std::string name, int width, int height);
  ~World() override;

 private:
  Vector2<int> size;
  std::string name;
};
} //namespace fightdude

#endif //FIGHT_DUDE_WORLD_H
