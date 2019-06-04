#ifndef FIGHT_DUDE_EVENT_H
#define FIGHT_DUDE_EVENT_H

#include <vector>
#include <functional>

namespace fightdude {
/**
 * Engine event class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Event {
 public:
  enum Type {
    UPDATE,
    RENDER
  };

  explicit Event(Type type = Type::UPDATE);
 private:
  Type type;
};
} //namespace fightdude

#endif //FIGHT_DUDE_EVENT_H
