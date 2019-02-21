#include "GameEntity.h"

GameEntity::GameEntity() : loaded(false) {}

GameEntity::~GameEntity() = default;

void GameEntity::load(const std::string &filename) {
  if (!texture.loadFromFile(filename)) {
    this->filename = "";
    loaded = false;
  } else {
    this->filename = filename;
    sprite.setTexture(texture);
    loaded = true;
  }
}

void GameEntity::draw(sf::RenderWindow &window) {
  if (loaded) {
    window.draw(sprite);
  }
}

void GameEntity::update(float elapsedTime) {}

sf::Vector2f GameEntity::getPosition() const {
  return loaded ? sprite.getPosition() : sf::Vector2f();
}

sf::Sprite &GameEntity::getSprite() {
  return sprite;
}

bool GameEntity::isLoaded() const {
  return loaded;
}

void GameEntity::setPosition(sf::Vector2f position) {
  if (loaded) {
    sprite.setPosition(position);
  }
}
