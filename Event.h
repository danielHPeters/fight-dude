#ifndef FIGHT_DUDE_EVENT_H
#define FIGHT_DUDE_EVENT_H

#include <vector>
#include <functional>

namespace fightdude {
class Event {
 public:
  enum Type {
    UPDATE,
    RENDER
  };
 private:
  Type type;
};
} //namespace fightdude

#endif //FIGHT_DUDE_EVENT_H
