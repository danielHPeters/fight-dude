//
// Created by daniel on 12.10.17.
//

#include "GameObject.h"

GameObject::GameObject() : loaded(false) {
}

GameObject::~GameObject() {

}

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

void GameObject::setPosition(sf::Vector2f position) {
  if (loaded) {
    sprite.setPosition(position);
  }
}