#ifndef FIGHT_DUDE_BALL_H
#define FIGHT_DUDE_BALL_H

#include "GameEntity.h"

/**
 * Ball GameObject class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class Ball : public GameEntity {
 public:
  Ball();
  ~Ball() override;
};

#endif //FIGHT_DUDE_BALL_H
