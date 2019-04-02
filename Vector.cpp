#include "Vector.h"
#include <exception>
#include <math.h>

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam Type
 * @param x
 * @param y
 */
template<class Type>
Vector<Type>::Vector(Type x, Type y) : x(x), y(y) {}

/**
 * Destructor.
 *
 * @tparam Type
 */
template<class Type>
Vector<Type>::~Vector() = default;

/**
 * Equality check operator.
 *
 * @tparam Type
 * @param vector
 * @return
 */
template<class Type>
bool Vector<Type>::operator==(const Vector<Type> &vector) {
  return this->x == vector.x && this->y == vector.y;
}

/**
 *
 * @tparam Type
 * @param vector
 * @return
 */
template<class Type>
Vector<Type> Vector<Type>::operator+(const Vector<Type> &vector) {
  return Vector<Type>(this->x + vector.x, this->y + vector.y);
}

/**
 *
 * @tparam Type
 * @param vector
 */
template<class Type>
void Vector<Type>::operator+=(const Vector<Type> &vector) {
  this->x = vector.x;
  this->y = vector.y;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Vector<Type>::getX() const {
  return x;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Vector<Type>::getY() const {
  return y;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Vector<Type>::mag() const {
  return sqrt(this->x * this->x + this->y * this > y);
}

/**
 * Get the dot product between this vector and another vector.
 *
 * @tparam Type
 * @param vector
 * @return
 */
template<class Type>
Type Vector<Type>::dot(Vector<Type> vector) const {
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
void Vector<Type>::lerp(Vector<Type> vector, Type normal) const {
  this->x = (1 - normal) * this->x + normal * vector.x;
  this->y = (1 - normal) * this->y + normal * vector.y;
}

/**
 *
 * @tparam Type
 * @param vector
 */
template<class Type>
void Vector<Type>::add(Vector &vector) {
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
void Vector<Type>::add(Type x, Type y) {
  this->x += x;
  this->y += y;
}

/**
 *
 * @tparam Type
 * @param vector
 */
template<class Type>
void Vector<Type>::subtract(Vector<Type> &vector) {
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
void Vector<Type>::subtract(Type x, Type y) {
  this->x -= x;
  this->y -= y;
}

/**
 *
 * @tparam Type
 * @param scalar
 */
template<class Type>
void Vector<Type>::multitply(Type scalar) {
  this->x *= scalar;
  this->y *= scalar;
}

/**
 *
 * @tparam Type
 * @param scalar
 */
template<class Type>
void Vector<Type>::divide(Type scalar) {
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
void Vector<Type>::normalize() {
  this->divide(mag());
}
} // namespace fightdude
