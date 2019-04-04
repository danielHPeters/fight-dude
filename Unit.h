#ifndef FIGHT_DUDE_UNIT_H
#define FIGHT_DUDE_UNIT_H

#include <string>
#include "GameEntity.h"

namespace fightdude {
/**
 * Basic unit class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Unit : GameEntity {
 public:
  enum Type {
    CAVALRY, INFANTRY, AIR, WATER, SIEGE, PEASANT
  };

  Unit(std::string id, std::string createdAt, std::string updatedAt, std::string fileName, Unit::Type type);
  ~Unit() override;

  void render(sf::RenderWindow &renderWindow) override;
  void update(double elapsedTime) override;
  Unit::Type getType() const;

 private:
  Unit::Type type;
};
} //namespace fightdude

#endif //FIGHT_DUDE_UNIT_H
