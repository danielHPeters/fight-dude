#include <utility>
#include "GameEntity.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 * @param fileName  Sprite filename
 */
GameEntity::GameEntity(std::string id, std::string createdAt, std::string updatedAt, std::string fileName)
    : Entity(std::move(id), std::move(createdAt), std::move(createdAt)), fileName(std::move(fileName)), loaded(false) {}

/**
 * Destructor.
 */
GameEntity::~GameEntity() = default;

/**
 * Load the sprite of this game entity.
 */
void GameEntity::load() {
  loaded = texture.loadFromFile(fileName);

  if (loaded) {
    sprite.setTexture(texture);
  }
}

/**
 * Render method of the game entity.
 *
 * @param window Game window to render the game entity on
 */
void GameEntity::render(sf::RenderWindow &window) {
  if (loaded) {
    window.draw(sprite);
  }
}

/**
 * Update internal data like position, size etc. of this game entity.
 *
 * @param elapsedTime Time since last update
 */
void GameEntity::update(double elapsedTime) {}

/**
 * Getter for the vector position of this game entity.
 *
 * @return Position of the entity or an empty vector if the sprite did not load
 */
sf::Vector2f GameEntity::getPosition() const {
  return loaded ? sprite.getPosition() : sf::Vector2f();
}

/**
 * Getter for the sprite of the game entity.
 *
 * @return Sprite of the game entity
 */
sf::Sprite &GameEntity::getSprite() {
  return sprite;
}

/**
 * Checks if sprite asset has been loaded.
 *
 * @return True if the sprite has been successfully loaded.
 */
bool GameEntity::isLoaded() const {
  return loaded;
}

/**
 * Set position of the internal sprite.
 * Does nothing if sprite loading failed.
 *
 * @param position New position
 */
void GameEntity::setPosition(sf::Vector2f position) {
  if (loaded) {
    sprite.setPosition(position);
  }
}
} //namespace fightdude
