#ifndef FIGHT_DUDE_BUILDING_H
#define FIGHT_DUDE_BUILDING_H

#include <string>
#include <SFML/System.hpp>
#include "GameEntity.h"

namespace fightdude {
class Building : GameEntity {
  Building(std::string id, std::string name, std::string fileName);
  ~Building() override;

  std::string getName() const;
  std::string getDescription() const;

 private:
  std::string name;
  std::string description;
};
} // namespace fightdude

#endif // FIGHT_DUDE_BUILDING_H
