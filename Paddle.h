//
// Created by daniel on 12.10.17.
//

#ifndef FIGHT_DUDE_PADDLE_H
#define FIGHT_DUDE_PADDLE_H

#include "GameEntity.h"
#include <SFML/Window.hpp>

/**
 * Player paddle class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class Paddle : public GameEntity {
 public:
  Paddle();
  ~Paddle() override;

  void draw(sf::RenderWindow &renderWindow) override;
  void update(float elapsedTime) override;
  float getVelocity() const;

 private:
  float velocity;
  float maxVelocity;
};

#endif //FIGHT_DUDE_PADDLE_H
