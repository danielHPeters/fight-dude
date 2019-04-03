#include <cassert>
#include <utility>
#include "Paddle.h"

namespace fightdude {
/**
 * Constructor.
 */
Paddle::Paddle(std::string id, std::string fileName)
    : GameEntity(std::move(id), std::move(fileName)),
      velocity(0.0f),
      maxVelocity(600.0f) {
  load();
  assert(isLoaded());

  float width = this->sprite.getGlobalBounds().width / 2;
  float height = this->sprite.getGlobalBounds().height / 2;

  this->sprite.setOrigin(width, height);
}

/**
 * Destructor.
 */
Paddle::~Paddle() = default;

/**
 *
 * @param renderWindow
 */
void Paddle::render(sf::RenderWindow &renderWindow) {
  GameEntity::render(renderWindow);
}

/**
 *
 * @param elapsedTime
 */
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

/**
 *
 * @return
 */
float Paddle::getVelocity() const {
  return velocity;
}
} //namespace fightdude
