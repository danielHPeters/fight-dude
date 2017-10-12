//
// Created by daniel on 12.10.17.
//

#include <assert.h>
#include "Paddle.h"

Paddle::Paddle() : velocity(0), maxVelocity(600.0f) {
  load("assets/game-objects/paddle.png");
  assert(isLoaded());
  getSprite().setOrigin(getSprite().getGlobalBounds().width /2, getSprite().getGlobalBounds().height / 2);
}

Paddle::~Paddle() {

}

void Paddle::draw(sf::RenderWindow &renderWindow) {
  GameObject::draw(renderWindow);
}

void Paddle::update(float elapsedTime) {
}

float Paddle::getVelocity() const {
  return velocity;
}