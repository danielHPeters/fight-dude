#ifndef FIGHT_DUDE_BALL_H
#define FIGHT_DUDE_BALL_H

#include <string>
#include "GameEntity.h"

namespace fightdude {
/**
 * Ball GameObject class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Ball : public GameEntity {
 public:
  Ball(std::string id, std::string fileName);
  ~Ball() override;
};
} // namespace fightdude

#endif // FIGHT_DUDE_BALL_H
