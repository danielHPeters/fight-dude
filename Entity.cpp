//
// Created by daniel on 17.10.17.
//

#include "Entity.h"

Entity::Entity(std::string id, std::string name, std::string description) : id(std::move(id)), name(std::move(name)), description(std::move(description)){

}

Entity::~Entity() {

}

std::string Entity::getId() {
  return id;
}

std::string Entity::getName() {
  return name;
}

std::string Entity::getDescription() {
  return description;
}