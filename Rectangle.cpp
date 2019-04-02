#include "Rectangle.h"

namespace fightdude {
Rectangle::Rectangle(double left, double right, double top, double bottom)
    : left(left), right(right), top(top), bottom(bottom) {}

/**
 * Set all values.
 *
 * @param left
 * @param right
 * @param top
 * @param bottom
 */
void Rectangle::set(double left, double right, double top, double bottom) {
  this->left = left;
  this->right = right;
  this->top = top;
  this->bottom = bottom;
}

/**
 * Check if this rectangle is within the area of other rectangle.
 *
 * @param other Other rectangle
 * @return
 */
bool Rectangle::within(Rectangle &other) const {
  return other.left <= this->left &&
      other.right >= this->right &&
      other.top <= this->top &&
      other.bottom >= this->bottom;
}

/**
 * Check if this rectangle overlaps with other rectangle.
 *
 * @param other Other rectangle
 * @return      True if this rectangle overlaps with other rectangle
 */
bool Rectangle::overlaps(Rectangle &other) const {
  return this->left < other.right &&
      other.left < this->right &&
      this->top < other.bottom &&
      other.top < this->bottom;
}

/**
 *
 * @return
 */
double Rectangle::getWidth() const {
  return this->right - this->left;
}

/**
 *
 * @return
 */
double Rectangle::getHeight() const {
  return this->bottom - this->top;
}

Rectangle::~Rectangle() = default;
}
