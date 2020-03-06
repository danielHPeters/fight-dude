#include <cassert>
#include <utility>
#include "Paddle.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createAt  Create timestamp
 * @param updatedAt Update timestamp
 * @param fileName  Sprite filename
 */
Paddle::Paddle(std::string id, std::string fileName)
    : GameEntity(std::move(id), std::move(fileName)),
      velocity(0.0f),
      maxVelocity(600.0f),
      friction(0.9f) {
  load();
  assert(isLoaded());

  float width = sprite.getGlobalBounds().width / 2;
  float height = sprite.getGlobalBounds().height / 2;

  sprite.setOrigin(width, height);
}

/**
 * Destructor.
 */
Paddle::~Paddle() = default;

/**
 * Paddle main render method.
 *
 * @param renderWindow Window on which the paddle should be rendered
 */
void Paddle::render(sf::RenderWindow &renderWindow) {
  GameEntity::render(renderWindow);
}

/**
 * Update paddle position, velocity etc.
 *
 * @param elapsedTime Time elapsed between last and current update
 */
void Paddle::update(double elapsedTime) {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
    if (velocity > 0.0f) {
      velocity = 0.0f;
    }

    if (velocity > -maxVelocity) {
      velocity--;
    }
  }

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
    if (velocity < 0.0f) {
      velocity = 0.0f;
    }

    if (velocity < maxVelocity) {
      velocity++;
    }
  }

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
    velocity = 0.0f;
  }

  velocity *= friction;

  sf::Vector2f position = getPosition();

  bool left = position.x < (getSprite().getGlobalBounds().width / 2.0f);
  bool right = position.x > (1024.0f - getSprite().getGlobalBounds().width / 2.0f);

  if ((left && velocity < 0.0f) || (right && velocity > 0.0f)) {
    velocity = 0.0f;
  }

  getSprite().move(velocity, 0);
}

/**
 * Getter for paddle velocity.
 *
 * @return Current velocity
 */
float Paddle::getVelocity() const {
  return velocity;
}
} //namespace fightdude
