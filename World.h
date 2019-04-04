#ifndef FIGHT_DUDE_WORLD_H
#define FIGHT_DUDE_WORLD_H

#include <string>
#include "Vector2.h"
#include "Entity.h"
#include "GameEntity.h"
#include "EntityManager.h"

namespace fightdude {
/**
 * World class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class World : public GameEntity {
  World(
      std::string id,
      std::string createdAt,
      std::string updatedAt,
      std::string fileName,
      std::string name,
      int width,
      int height
  );
  ~World() override;

 private:
  Vector2<int> size;
  std::string name;
};
} //namespace fightdude

#endif //FIGHT_DUDE_WORLD_H
