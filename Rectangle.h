#ifndef FIGHT_DUDE_RECTANGLE_H
#define FIGHT_DUDE_RECTANGLE_H

#include "Shape.h"
#include "Vector2.h"

namespace fightdude {
/**
 * Rectangle shape used for collision checking.
 *
 * @tparam Type Numeric type
 * @author Daniel Peters
 * @version 1.0
 */
template<class Type>
class Rectangle : public Shape<Type> {
 public:
  Rectangle(std::uint8_t sidesCount, Type left, Type top, Type width, Type height);
  ~Rectangle();

  void set(Type left, Type top, Type width, Type height);
  bool within(Rectangle &other) const;
  bool overlaps(Rectangle &other) const;
  Type getLeft() const;
  Type getTop() const;
  Vector2<Type> getPosition() const;
  Type getWidth() const;
  Type getHeight() const;

 private:
  Type left;
  Type top;
  Type width;
  Type height;
};
} //namespace fightdude

#endif //FIGHT_DUDE_RECTANGLE_H
