#ifndef FIGHT_DUDE_VECTOR_H
#define FIGHT_DUDE_VECTOR_H

namespace fightdude {

/**
 * Custom math vector implementation.
 *
 * @tparam Type Numeric type
 */
template<class Type>
class Vector {
 public:
  Vector(Type x, Type y);
  ~Vector();

  bool operator==(const Vector<Type> &vector);
  Vector<Type> operator+(const Vector<Type> &vector);
  void operator+=(const Vector<Type> &vector);

  Type getX() const;
  Type getY() const;
  Type mag() const;
  Type dot(Vector<Type> vector) const;
  void lerp(Vector<Type> vector, Type normal) const;
  void add(Vector<Type> &vector);
  void add(Type x, Type y);
  void subtract(Vector<Type> &vector);
  void subtract(Type x, Type y);
  void multitply(Type scalar);
  void divide(Type scalar);
  void normalize();

 private:
  Type x;
  Type y;
};
} // namespace fightdude

#endif // FIGHT_DUDE_VECTOR_H
