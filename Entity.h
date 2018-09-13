#ifndef FIGHT_DUDE_ENTITY_H
#define FIGHT_DUDE_ENTITY_H

#include <string>

/**
 * Base game entity class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
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

#endif //FIGHT_DUDE_ENTITY_H
