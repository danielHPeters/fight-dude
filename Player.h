#ifndef FIGHT_DUDE_PLAYER_H
#define FIGHT_DUDE_PLAYER_H

#include <string>
#include <cstdint>
#include "Entity.h"

namespace fightdude {
/**
 * Player class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Player : public Entity {
 public:
  Player(std::string id, std::string name);
  ~Player() override;

  std::string getName() const;
  std::uint64_t getHighScore() const;

 private:
  std::string name;
  std::uint64_t highScore;
};
} //namespace fightdude

#endif //FIGHT_DUDE_PLAYER_H
