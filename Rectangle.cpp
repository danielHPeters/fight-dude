#include "Rectangle.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam Type
 * @param left
 * @param right
 * @param width
 * @param height
 */
template<class Type>
Rectangle<Type>::Rectangle(std::uint8_t sidesCount, Type left, Type top, Type width, Type height)
    : Shape<Type>(sidesCount), left(left), top(top), width(width), height(height) {}

/**
 * Destructor.
 *
 * @tparam Type
 */
template<class Type>
Rectangle<Type>::~Rectangle() = default;

/**
 * Set all values.
 *
 * @tparam Type
 * @param left
 * @param right
 * @param width
 * @param height
 */
template<class Type>
void Rectangle<Type>::set(Type left, Type top, Type width, Type height) {
  this->left = left;
  this->top = top;
  this->width = width;
  this->height = height;
}

/**
 * Check if this rectangle is within the area of other rectangle.
 *
 * @tparam Type
 * @param other Other rectangle
 * @return
 */
template<class Type>
bool Rectangle<Type>::within(Rectangle &other) const {
  return false;
}

/**
 * Check if this rectangle overlaps with other rectangle.
 *
 * @tparam Type
 * @param other Other rectangle
 * @return      True if this rectangle overlaps with other rectangle
 */
template<class Type>
bool Rectangle<Type>::overlaps(Rectangle &other) const {
  return false;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Rectangle<Type>::getLeft() const {
  return left;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Rectangle<Type>::getTop() const {
  return top;
}

/**
 * Get left (x) and top (y) as position vector.
 *
 * @tparam Type
 * @return
 */
template<class Type>
Vector2<Type> Rectangle<Type>::getPosition() const {
  return Vector2<Type>(left, top);
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Rectangle<Type>::getWidth() const {
  return width;
}

/**
 *
 * @tparam Type
 * @return
 */
template<class Type>
Type Rectangle<Type>::getHeight() const {
  return height;
}
} //namespace fightdude
