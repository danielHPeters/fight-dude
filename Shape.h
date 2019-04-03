#ifndef FIGHT_DUDE_SHAPE_H
#define FIGHT_DUDE_SHAPE_H

#include <cstdint>

namespace fightdude {
/**
 * Base shape class.
 *
 * @tparam Type
 * @author Daniel Peters
 * @version 1.0
 */
template<class Type>
class Shape {
 public:
  explicit Shape(std::uint8_t sidesCount);
  ~Shape();

 protected:
  std::uint8_t getSidesCount() const;

 private:
  std::uint8_t sidesCount;
};
} //namespace fightdude

#endif //FIGHT_DUDE_SHAPE_H
