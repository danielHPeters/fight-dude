#include "Shape.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam T
 * @param sidesCount
 */
template<class T>
Shape<T>::Shape(std::uint8_t sidesCount) : sidesCount(sidesCount) {}

/**
 * Destructor.
 *
 * @tparam T
 */
template<class T>
Shape<T>::~Shape() = default;

/**
 * Getter for sidesCount.
 *
 * @tparam T Numeric type
 * @return The number of sizes of this shape
 */
template<class T>
std::uint8_t Shape<T>::getSidesCount() const {
  return sidesCount;
}
} //namespace fightdude
