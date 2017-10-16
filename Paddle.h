//
// Created by daniel on 12.10.17.
//

#ifndef FIGHT_DUDE_PADDLE_H
#define FIGHT_DUDE_PADDLE_H


#include "GameObject.h"
#include <SFML/Window.hpp>

class Paddle : public GameObject {
public:
  Paddle();
  ~Paddle();

  void draw(sf::RenderWindow &renderWindow);
  void update(float elapsedTime);

  float getVelocity() const;

private:
  float velocity;
  float maxVelocity;
};


#endif //FIGHT_DUDE_PADDLE_H
