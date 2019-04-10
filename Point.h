#ifndef FIGHT_DUDE_POINT_H
#define FIGHT_DUDE_POINT_H

#include <cstdint>

namespace fightdude {
/**
 * Simple x, y coordinates holder.
 *
 * @tparam T Numeric type
 * @author Daniel Peters
 * @version 1.0
 */
template <class T>
class Point {
 public:
  Point(T x, T y);
  ~Point();

  T getX() const;
  T getY() const;

 private:
  T x;
  T y;
};
} //namespace fightdude

#endif //FIGHT_DUDE_POINT_H
