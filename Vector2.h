#ifndef FIGHT_DUDE_VECTOR2_H
#define FIGHT_DUDE_VECTOR2_H

namespace fightdude {
/**
 * Custom 2D vector implementation.
 *
 * @tparam Type Numeric type
 * @author Daniel Peters
 * @version 1.0
 */
template<class Type>
class Vector2 {
 public:
  Vector2(Type x, Type y);
  ~Vector2();

  bool operator==(const Vector2<Type> &vector);
  Vector2<Type> operator+(const Vector2<Type> &vector);
  void operator+=(const Vector2<Type> &vector);

  Type getX() const;
  Type getY() const;
  Type mag() const;
  Type dot(Vector2<Type> vector) const;
  void lerp(Vector2<Type> vector, Type normal);
  void add(Vector2<Type> &vector);
  void add(Type x, Type y);
  void subtract(Vector2<Type> &vector);
  void subtract(Type x, Type y);
  void multitply(Type scalar);
  void divide(Type scalar);
  void normalize();

 private:
  Type x;
  Type y;
};
} //namespace fightdude

#endif //FIGHT_DUDE_VECTOR2_H
