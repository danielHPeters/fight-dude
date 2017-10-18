//
// Created by daniel on 17.10.17.
//

#ifndef FIGHT_DUDE_ENTITY_H
#define FIGHT_DUDE_ENTITY_H

#include <string>

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
