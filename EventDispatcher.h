#ifndef FIGHT_DUDE_EVENTDISPATCHER_H
#define FIGHT_DUDE_EVENTDISPATCHER_H

#include "InputState.h"
#include "Event.h"

namespace fightdude {
class EventDispatcher {
 public:
  void dispatchEvent(Event event);
};
} //namespace fightdude

#endif //FIGHT_DUDE_EVENTDISPATCHER_H
