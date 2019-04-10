#include <cstdint>
#include <cmath>
#include <exception>
#include "Vector2.h"

namespace fightdude {
template
class Vector2<std::int8_t>;
template
class Vector2<std::int16_t>;
template
class Vector2<std::int32_t>;
template
class Vector2<std::int64_t>;
template
class Vector2<float>;
template
class Vector2<double>;

/**
 * Constructor.
 *
 * @tparam T
 * @param x
 * @param y
 */
template<class T>
Vector2<T>::Vector2(T x, T y) : x(x), y(y) {}

/**
 * Destructor.
 *
 * @tparam T
 */
template<class T>
Vector2<T>::~Vector2() = default;

/**
 * Equality check operator.
 *
 * @tparam T
 * @param vector
 * @return
 */
template<class T>
bool Vector2<T>::operator==(const Vector2<T> &vector) {
  return x == vector.x && y == vector.y;
}

/**
 *
 * @tparam T
 * @param vector
 * @return
 */
template<class T>
Vector2<T> Vector2<T>::operator+(const Vector2<T> &vector) {
  return Vector2<T>(x + vector.x, y + vector.y);
}

/**
 *
 * @tparam T
 * @param vector
 */
template<class T>
void Vector2<T>::operator+=(const Vector2<T> &vector) {
  x = vector.x;
  y = vector.y;
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Vector2<T>::getX() const {
  return x;
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Vector2<T>::getY() const {
  return y;
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Vector2<T>::mag() const {
  return std::sqrt(x * x + y * y);
}

/**
 * Get the dot product between this vector and another vector.
 *
 * @tparam T
 * @param vector
 * @return
 */
template<class T>
T Vector2<T>::dot(Vector2<T> vector) const {
  return x * vector.x + y * vector.y;
}

/**
 * Linear interpolation method.
 *
 * @tparam T
 * @param vector
 * @param normal
 */
template<class T>
void Vector2<T>::lerp(Vector2<T> vector, T normal) {
  x = (1 - normal) * x + normal * vector.x;
  y = (1 - normal) * y + normal * vector.y;
}

/**
 *
 * @tparam T
 * @param vector
 */
template<class T>
void Vector2<T>::add(Vector2 &vector) {
  x += vector.x;
  y += vector.y;
}

/**
 *
 * @tparam Type
 * @param x
 * @param y
 */
template<class Type>
void Vector2<Type>::add(Type x, Type y) {
  this->x += x;
  this->y += y;
}

/**
 *
 * @tparam T
 * @param vector
 */
template<class T>
void Vector2<T>::subtract(Vector2<T> &vector) {
  x -= vector.x;
  y -= vector.y;
}

/**
 *
 * @tparam T
 * @param x
 * @param y
 */
template<class T>
void Vector2<T>::subtract(T x, T y) {
  this->x -= x;
  this->y -= y;
}

/**
 *
 * @tparam T
 * @param scalar
 */
template<class T>
void Vector2<T>::multitply(T scalar) {
  x *= scalar;
  y *= scalar;
}

/**
 *
 * @tparam T
 * @param scalar
 */
template<class T>
void Vector2<T>::divide(T scalar) {
  if (scalar == 0.0) {
    throw std::exception();
  }

  x /= scalar;
  y /= scalar;
}

/**
 *
 * @tparam T
 */
template<class T>
void Vector2<T>::normalize() {
  divide(mag());
}
} //namespace fightdude
