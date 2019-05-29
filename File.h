#ifndef FIGHT_DUDE_FILE_H
#define FIGHT_DUDE_FILE_H

#include <cstddef>
#include <string>
#include "Entity.h"

namespace fightdude {
/**
 * File class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class File : public Entity {
 public:
  File(std::string id, std::string name, std::size_t size = 0);
  ~File() override;

  std::string getName() const;
  std::size_t getSize() const;
  void open();
  void close();

 private:
  std::string name;
  std::size_t size;
};
} //namespace fightdude

#endif //FIGHT_DUDE_FILE_H
