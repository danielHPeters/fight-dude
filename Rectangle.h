#ifndef FIGHT_DUDE_RECTANGLE_H
#define FIGHT_DUDE_RECTANGLE_H

#include "Shape.h"
#include "Vector2.h"

namespace fightdude {
/**
 * Rectangle shape used for collision checking.
 *
 * @tparam T Numeric type
 * @author Daniel Peters
 * @version 1.0
 */
template<class T>
class Rectangle : public Shape<T> {
 public:
  Rectangle(T left, T top, T width, T height);
  ~Rectangle();

  T getArea() override;

  void set(T left, T top, T width, T height);
  bool within(Rectangle &other) const;
  bool overlaps(Rectangle &other) const;
  T getLeft() const;
  T getTop() const;
  Vector2<T> getPosition() const;
  T getWidth() const;
  T getHeight() const;

 private:
  T left;
  T top;
  T width;
  T height;
};
} //namespace fightdude

#endif //FIGHT_DUDE_RECTANGLE_H
