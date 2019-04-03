#include <utility>
#include "GameEntity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param fileName
 */
GameEntity::GameEntity(std::string id, std::string fileName)
    : id(std::move(id)), fileName(std::move(fileName)), loaded(false) {}

/**
 * Destructor.
 */
GameEntity::~GameEntity() = default;

/**
 *
 * @param fileName
 */
void GameEntity::load() {
  this->loaded = texture.loadFromFile(this->fileName);

  if (this->loaded) {
    sprite.setTexture(texture);
  }
}

/**
 *
 * @param window
 */
void GameEntity::render(sf::RenderWindow &window) {
  if (loaded) {
    window.draw(sprite);
  }
}

/**
 *
 * @param elapsedTime
 */
void GameEntity::update(double elapsedTime) {}

/**
 *
 * @return
 */
std::string GameEntity::getId() const {
  return this->id;
}

/**
 *
 * @return
 */
sf::Vector2f GameEntity::getPosition() const {
  return loaded ? sprite.getPosition() : sf::Vector2f();
}

/**
 *
 * @return
 */
sf::Sprite &GameEntity::getSprite() {
  return sprite;
}

/**
 *
 * @return
 */
bool GameEntity::isLoaded() const {
  return loaded;
}

/**
 *
 * @param position
 */
void GameEntity::setPosition(sf::Vector2f position) {
  if (loaded) {
    sprite.setPosition(position);
  }
}
} //namespace fightdude
