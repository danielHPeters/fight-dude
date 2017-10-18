//
// Created by daniel on 17.10.17.
//

#ifndef FIGHT_DUDE_ITEM_H
#define FIGHT_DUDE_ITEM_H

#include <string>

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
