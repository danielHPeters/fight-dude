#ifndef FIGHT_DUDE_VECTOR2_H
#define FIGHT_DUDE_VECTOR2_H

namespace fightdude {
/**
 * Custom 2D vector implementation.
 *
 * @tparam T Numeric type
 * @author Daniel Peters
 * @version 1.0
 */
template<class T>
class Vector2 {
 public:
  Vector2(T x, T y);
  ~Vector2();

  bool operator==(const Vector2<T> &vector);
  Vector2<T> operator+(const Vector2<T> &vector);
  void operator+=(const Vector2<T> &vector);

  T getX() const;
  T getY() const;
  T mag() const;
  T dot(Vector2<T> vector) const;
  void lerp(Vector2<T> vector, T normal);
  void add(Vector2<T> &vector);
  void add(T x, T y);
  void subtract(Vector2<T> &vector);
  void subtract(T x, T y);
  void multiply(T scalar);
  void divide(T scalar);
  void normalize();

 private:
  T x;
  T y;
};
} //namespace fightdude

#endif //FIGHT_DUDE_VECTOR2_H
