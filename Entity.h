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
  Entity(std::string id, std::string name, std::string description);
  virtual ~Entity();
  std::string getId();
  std::string getName();
  std::string getDescription();

 private:
  std::string id;
  std::string name;
  std::string description;
};
} // namespace fightdude

#endif // FIGHT_DUDE_ENTITY_H
