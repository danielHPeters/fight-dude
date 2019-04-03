#include "Shape.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam Type
 * @param sidesCount
 */
template<class Type>
Shape<Type>::Shape(std::uint8_t sidesCount) : sidesCount(sidesCount) {}

/**
 * Destructor.
 *
 * @tparam Type
 */
template<class Type>
Shape<Type>::~Shape() = default;

/**
 * Getter for sidesCount.
 *
 * @tparam Type Numeric type
 * @return The number of sizes of this shape
 */
template<class Type>
std::uint8_t Shape<Type>::getSidesCount() const {
  return sidesCount;
}
} //namespace fightdude
