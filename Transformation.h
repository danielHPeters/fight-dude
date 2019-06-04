#ifndef FIGHT_DUDE_TRANSFORMATION_H
#define FIGHT_DUDE_TRANSFORMATION_H

#include "Vector2.h"
#include "Component.h"

namespace fightdude {
template<class T>
class Transformation : public Component {
 private:
  Vector2<T> position;
  T rotation;
  T size;
};
} //namespace fightdude

#endif //FIGHT_DUDE_TRANSFORMATION_H
