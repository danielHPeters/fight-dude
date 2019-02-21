#include <cassert>
#include <iostream>
#include "Paddle.h"

Paddle::Paddle() : velocity(0.0f), maxVelocity(600.0f) {
  load("./../assets/game-objects/paddle.png");
  assert(isLoaded());
  getSprite().setOrigin(getSprite().getGlobalBounds().width / 2, getSprite().getGlobalBounds().height / 2);
}

Paddle::~Paddle() = default;

void Paddle::draw(sf::RenderWindow &renderWindow) {
  GameEntity::draw(renderWindow);
}

void Paddle::update(float elapsedTime) {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
    velocity -= 3.0f;
  }

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
    velocity += 3.0f;
  }

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
    velocity = 0.0f;
  }

  if (velocity > maxVelocity) {
    velocity = maxVelocity;
  } else if (velocity < -maxVelocity) {
    velocity = -maxVelocity;
  }

  sf::Vector2f position = this->getPosition();

  bool left = position.x < (getSprite().getGlobalBounds().width / 2.0f);
  bool right = position.x > (1024.0f - getSprite().getGlobalBounds().width / 2.0f);

  if (left || right) {
    velocity = -velocity;
  }

  getSprite().move(velocity * elapsedTime, 0);
}

float Paddle::getVelocity() const {
  return velocity;
}
