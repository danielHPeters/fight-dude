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
class Vector2<std::uint32_t>;
template
class Vector2<std::int64_t>;
template
class Vector2<float>;
template
class Vector2<double>;

/**
 * Constructor.
 *
 * @tparam T    Numeric type
 * @param x     X coordinate
 * @param y     Y coordinate
 */
template<class T>
Vector2<T>::Vector2(T x, T y) : x(x), y(y) {}

/**
 * Destructor.
 *
 * @tparam T Numeric type
 */
template<class T>
Vector2<T>::~Vector2() = default;

/**
 * Equality check operator.
 *
 * @tparam T        Numeric type
 * @param vector    Other vector
 * @return          True if x and y coordinates of both vectors are equal
 */
template<class T>
bool Vector2<T>::operator==(const Vector2<T> &vector) {
  return x == vector.x && y == vector.y;
}

/**
 * Addition operator.
 *
 * @tparam T        Numeric type
 * @param vector    Other vector
 * @return          New vector with x and y values of combined vectors
 */
template<class T>
Vector2<T> Vector2<T>::operator+(const Vector2<T> &vector) {
  return Vector2<T>(x + vector.x, y + vector.y);
}

/**
 *
 * @tparam T        Numeric type
 * @param vector    Other vector
 */
template<class T>
void Vector2<T>::operator+=(const Vector2<T> &vector) {
  x = vector.x;
  y = vector.y;
}

/**
 * Getter for the x coordinate value.
 *
 * @tparam T    Numeric type
 * @return      X coordinate value
 */
template<class T>
T Vector2<T>::getX() const {
  return x;
}

/**
 * Getter for the y coordinate value.
 *
 * @tparam T    Numeric type
 * @return      Y coordinate value
 */
template<class T>
T Vector2<T>::getY() const {
  return y;
}

/**
 *
 * @tparam T    Numeric type
 * @return
 */
template<class T>
T Vector2<T>::mag() const {
  return std::sqrt(x * x + y * y);
}

/**
 * Get the dot product between this vector and another vector.
 *
 * @tparam T        Numeric type
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
 * @tparam T        Numeric type
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
 * @tparam T        Numeric type
 * @param vector
 */
template<class T>
void Vector2<T>::add(Vector2 &vector) {
  x += vector.x;
  y += vector.y;
}

/**
 *
 * @tparam T    Numeric type
 * @param x
 * @param y
 */
template<class T>
void Vector2<T>::add(T x, T y) {
  this->x += x;
  this->y += y;
}

/**
 *
 * @tparam T        Numeric type
 * @param vector
 */
template<class T>
void Vector2<T>::subtract(Vector2<T> &vector) {
  x -= vector.x;
  y -= vector.y;
}

/**
 *
 * @tparam T    Numeric type
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
 * @tparam T        Numeric type
 * @param scalar
 */
template<class T>
void Vector2<T>::multiply(T scalar) {
  x *= scalar;
  y *= scalar;
}

/**
 *
 * @tparam T        Numeric type
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
 * @tparam T    Numeric type
 */
template<class T>
void Vector2<T>::normalize() {
  divide(mag());
}
} //namespace fightdude
