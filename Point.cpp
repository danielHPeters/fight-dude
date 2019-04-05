#include "Point.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam T
 * @param x Coordinate x value
 * @param y Coordinate y value
 */
template<class T>
Point<T>::Point(T x, T y) : x(x), y(y) {}

/**
 * Destructor.
 *
 * @tparam T
 */
template<class T>
Point<T>::~Point() = default;

/**
 * Getter for the x value of this point.
 *
 * @tparam T
 * @return X value of point
 */
template<class T>
T Point<T>::getX() const {
  return x;
}

/**
 * Getter for the y value of this point.
 *
 * @tparam T
 * @return Y value of point
 */
template<class T>
T Point<T>::getY() const {
  return y;
}
} //namespace fightdude
