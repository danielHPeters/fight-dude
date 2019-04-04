#include <cmath>
#include <exception>
#include "Vector2.h"

namespace fightdude {
template class Vector2<int>;
template class Vector2<float>;
template class Vector2<double>;

/**
 * Constructor.
 *
 * @tparam Type
 * @param x
 * @param y
 */
template<class Type>
Vector2<Type>::Vector2(Type x, Type y) : x(x), y(y) {}

/**
 * Destructor.
 *
 * @tparam Type
 */
template<class Type>
Vector2<Type>::~Vector2() = default;

/**
 * Equality check operator.
 *
 * @tparam Type
 * @param vector
 * @return
 */
template<class Type>
bool Vector2<Type>::operator==(const Vector2<Type> &vector) {
  return this->x == vector.x && this->y == vector.y;
}

/**
 *
 * @tparam Type
 * @param vector
 * @return
 */
template<class Type>
Vector2<Type> Vector2<Type>::operator+(const Vector2<Type> &vector) {
  return Vector2<Type>(this->x + vector.x, this->y + vector.y);
}

/**
 *
 * @tparam Type
 * @param vector
 */
template<class Type>
void Vector2<Type>::operator+=(const Vector2<Type> &vector) {
  this->x = vector.x;
  this->y = vector.y;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Vector2<Type>::getX() const {
  return x;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Vector2<Type>::getY() const {
  return y;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Vector2<Type>::mag() const {
  return std::sqrt(this->x * this->x + this->y * this-> y);
}

/**
 * Get the dot product between this vector and another vector.
 *
 * @tparam Type
 * @param vector
 * @return
 */
template<class Type>
Type Vector2<Type>::dot(Vector2<Type> vector) const {
  return this->x * vector.x + this->y * vector.y;
}

/**
 * Linear interpolation method.
 *
 * @tparam Type
 * @param vector
 * @param normal
 */
template<class Type>
void Vector2<Type>::lerp(Vector2<Type> vector, Type normal) {
  this->x = (1 - normal) * this->x + normal * vector.x;
  this->y = (1 - normal) * this->y + normal * vector.y;
}

/**
 *
 * @tparam Type
 * @param vector
 */
template<class Type>
void Vector2<Type>::add(Vector2 &vector) {
  this->x += vector.x;
  this->y += vector.y;
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
 * @tparam Type
 * @param vector
 */
template<class Type>
void Vector2<Type>::subtract(Vector2<Type> &vector) {
  this->x -= vector.x;
  this->y -= vector.y;
}

/**
 *
 * @tparam Type
 * @param x
 * @param y
 */
template<class Type>
void Vector2<Type>::subtract(Type x, Type y) {
  this->x -= x;
  this->y -= y;
}

/**
 *
 * @tparam Type
 * @param scalar
 */
template<class Type>
void Vector2<Type>::multitply(Type scalar) {
  this->x *= scalar;
  this->y *= scalar;
}

/**
 *
 * @tparam Type
 * @param scalar
 */
template<class Type>
void Vector2<Type>::divide(Type scalar) {
  if (scalar == 0.0) {
    throw std::exception();
  }

  this->x /= scalar;
  this->y /= scalar;
}

/**
 *
 * @tparam Type
 */
template<class Type>
void Vector2<Type>::normalize() {
  this->divide(mag());
}
} //namespace fightdude
