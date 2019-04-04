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
  Entity(std::string id, std::string createdAt, std::string updatedAt);
  virtual ~Entity();

  std::string getId() const;
  std::string getCreatedAt() const;
  std::string getUpdatedAt() const;

 private:
  std::string id;
  std::string createdAt;
  std::string updatedAt;
};
} //namespace fightdude

#endif //FIGHT_DUDE_ENTITY_H
