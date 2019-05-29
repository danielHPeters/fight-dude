#ifndef FIGHT_DUDE_ENTITY_H
#define FIGHT_DUDE_ENTITY_H

#include <string>
#include "Serializable.h"

namespace fightdude {
/**
 * Base game entity class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Entity {
 public:
  explicit Entity(std::string id);
  virtual ~Entity();

  std::string getId() const;

 private:
  std::string id;
};
} //namespace fightdude

#endif //FIGHT_DUDE_ENTITY_H
