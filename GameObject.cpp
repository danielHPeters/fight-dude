#include "GameObject.h"

GameObject::GameObject() : loaded(false) {}

GameObject::~GameObject() = default;

void GameObject::load(std::string filename) {
  if (!texture.loadFromFile(filename)) {
    this->filename = "";
    loaded = false;
  } else {
    this->filename = filename;
    sprite.setTexture(texture);
    loaded = true;
  }
}

void GameObject::draw(sf::RenderWindow &window) {
  if (loaded) {
    window.draw(sprite);
  }
}

void GameObject::update(float elapsedTime) {}

sf::Vector2f GameObject::getPosition() const {
  return loaded ? sprite.getPosition() : sf::Vector2f();
}

sf::Sprite &GameObject::getSprite() {
  return sprite;
}

bool GameObject::isLoaded() const {
  return loaded;
}

void GameObject::setPosition(sf::Vector2f position) {
  if (loaded) {
    sprite.setPosition(position);
  }
}
