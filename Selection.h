#ifndef FIGHT_DUDE_SELECTION_H
#define FIGHT_DUDE_SELECTION_H

#include <string>
#include <unordered_map>
#include "GameEntity.h"
#include "Entity.h"

namespace fightdude {
/**
 * Unit selection class.
 */
class Selection : Entity {
 public:
  explicit Selection(std::string id);
  ~Selection() override;

 private:
  std::unordered_map<std::string, GameEntity> units;
};
} // namespace fightdude

#endif // FIGHT_DUDE_SELECTION_H
