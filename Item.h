#ifndef FIGHT_DUDE_ITEM_H
#define FIGHT_DUDE_ITEM_H

#include <string>
#include "GameEntity.h"

namespace fightdude {
/**
 * Item GameObject class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Item : GameEntity {
 public:
  Item(std::string id, std::string fileName, std::string name, std::string description);
  ~Item() override;

  std::string getName() const;
  std::string getDescription() const;

 private:
  std::string name;
  std::string description;
};
} //namespace fightdude

#endif //FIGHT_DUDE_ITEM_H
