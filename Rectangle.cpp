#include "Rectangle.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam T
 * @param left
 * @param right
 * @param width
 * @param height
 */
template<class T>
Rectangle<T>::Rectangle(std::uint8_t sidesCount, T left, T top, T width, T height)
    : Shape<T>(sidesCount), left(left), top(top), width(width), height(height) {}

/**
 * Destructor.
 *
 * @tparam T
 */
template<class T>
Rectangle<T>::~Rectangle() = default;

/**
 * Set all values.
 *
 * @tparam T
 * @param left
 * @param right
 * @param width
 * @param height
 */
template<class T>
void Rectangle<T>::set(T left, T top, T width, T height) {
  this->left = left;
  this->top = top;
  this->width = width;
  this->height = height;
}

/**
 * Check if this rectangle is within the area of other rectangle.
 *
 * @tparam T
 * @param other Other rectangle
 * @return
 */
template<class T>
bool Rectangle<T>::within(Rectangle &other) const {
  return false;
}

/**
 * Check if this rectangle overlaps with other rectangle.
 *
 * @tparam T
 * @param other Other rectangle
 * @return      True if this rectangle overlaps with other rectangle
 */
template<class T>
bool Rectangle<T>::overlaps(Rectangle &other) const {
  return false;
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Rectangle<T>::getLeft() const {
  return left;
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Rectangle<T>::getTop() const {
  return top;
}

/**
 * Get left (x) and top (y) as position vector.
 *
 * @tparam T
 * @return
 */
template<class T>
Vector2<T> Rectangle<T>::getPosition() const {
  return Vector2<T>(left, top);
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Rectangle<T>::getWidth() const {
  return width;
}

/**
 *
 * @tparam T
 * @return
 */
template<class T>
T Rectangle<T>::getHeight() const {
  return height;
}
} //namespace fightdude
