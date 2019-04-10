#ifndef FIGHT_DUDE_BUILDING_H
#define FIGHT_DUDE_BUILDING_H

#include <string>
#include <SFML/System.hpp>
#include "GameEntity.h"

namespace fightdude {
/**
 * Building unit class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Building : GameEntity {
 public:
  Building(std::string id, std::string createdAt, std::string updatedAt, std::string name, std::string fileName);
  ~Building() override;

  std::string getName() const;
  std::string getDescription() const;

 private:
  std::string name;
  std::string description;
};
} //namespace fightdude

#endif //FIGHT_DUDE_BUILDING_H
