#ifndef FIGHT_DUDE_ITEM_H
#define FIGHT_DUDE_ITEM_H

#include <string>

/**
 * Item GameObject class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 */
class Item {
 public:
  Item(std::string name, std::string description);
  ~Item();
  std::string getName();
  std::string getDescription();
 private:
  std::string name;
  std::string description;
};

#endif //FIGHT_DUDE_ITEM_H
