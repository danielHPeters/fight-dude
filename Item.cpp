#include "Item.h"

#include <utility>

Item::Item(std::string name, std::string description) : name(std::move(name)), description(std::move(description)) {}

Item::~Item() = default;

std::string Item::getName() {
  return name;
}

std::string Item::getDescription() {
  return description;
}
