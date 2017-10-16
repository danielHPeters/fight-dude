//
// Created by daniel on 13.10.17.
//

#include <cassert>
#include "Ball.h"

Ball::Ball() {
  load("assets/game-objects/ball.png");
  assert(isLoaded());

  getSprite().setOrigin(0,0);
}

Ball::~Ball() {

}