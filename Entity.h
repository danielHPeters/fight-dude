#ifndef FIGHT_DUDE_ENTITY_H
#define FIGHT_DUDE_ENTITY_H

#include <string>

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

  virtual std::string getId() const;

 private:
  std::string id;
};
} //namespace fightdude

#endif //FIGHT_DUDE_ENTITY_H
