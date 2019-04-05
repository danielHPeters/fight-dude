#ifndef FIGHT_DUDE_QUADTREE_H
#define FIGHT_DUDE_QUADTREE_H

#include <cstdint>
#include <vector>
#include "Rectangle.h"

namespace fightdude {
/**
 * QuadTree class used for speeding up collision detection.
 *
 * @tparam T
 * @author Daniel Peters
 * @version 1.0
 */
template<class T>
class QuadTree {
 public:
  QuadTree(
      std::int32_t x,
      std::int32_t y,
      std::int32_t width,
      std::int32_t height,
      std::uint8_t maxObjects,
      std::uint8_t maxLevels,
      std::uint8_t level = 0
  );
  ~QuadTree();

  std::vector<T> getAllobjects();
  std::vector<T> find(T element);
  std::uint8_t indexOf(T element);
  void insert(T element);
  void insert(std::vector<T> elements);
  void split();
  void clear();

 private:
  std::uint8_t level;
  std::uint8_t maxObjects;
  std::uint8_t maxLevels;
  Rectangle<std::int32_t> hitBox;
  std::vector<T> objects;
  std::vector<QuadTree<T>> nodes;
};
} //namespace fightdude

#endif //FIGHT_DUDE_QUADTREE_H
