#include "QuadTree.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam T
 * @param x
 * @param y
 * @param width
 * @param height
 * @param maxObjects
 * @param maxLevels
 * @param level
 */
template<class T>
QuadTree<T>::QuadTree(
    std::int32_t x,
    std::int32_t y,
    std::int32_t width,
    std::int32_t height,
    std::uint8_t maxObjects,
    std::uint8_t maxLevels,
    uint8_t level
) : hitBox(4, x, y, width, height), maxObjects(maxObjects), maxLevels(maxLevels), level(level) {}

/**
 * Destructor.
 *
 * @tparam T
 */
template<class T>
QuadTree<T>::~QuadTree() = default;

/**
 * Get all objects int this QuadTree and its sub trees.
 *
 * @tparam T
 * @return All found objects
 */
template<class T>
std::vector<T> QuadTree<T>::getAllobjects() {
  return std::vector<T>();
}

/**
 * Fin all instances of an object.
 *
 * @tparam T
 * @param element
 * @return
 */
template<class T>
std::vector<T> QuadTree<T>::find(T element) {
  return std::vector<T>();
}

/**
 * Find index of an object.
 *
 * @tparam T
 * @param element
 * @return
 */
template<class T>
std::uint8_t QuadTree<T>::indexOf(T element) {
  return 0;
}

/**
 * Insert one object of type T.
 *
 * @tparam T
 * @param object
 */
template<class T>
void QuadTree<T>::insert(T element) {}

/**
 * Insert a multiple objects of type T.
 *
 * @tparam T
 * @param elements
 */
template<class T>
void QuadTree<T>::insert(std::vector<T> elements) {
  for (auto &element : elements) {
    insert(element);
  }
}

/**
 * Split this QuadTree into sub trees.
 *
 * @tparam T
 */
template<class T>
void QuadTree<T>::split() {}

/**
 * Empty this QuadTree.
 *
 * @tparam T
 */
template<class T>
void QuadTree<T>::clear() {
  objects.clear();

  for (QuadTree<T> &node : nodes) {
    node.clear();
  }

  nodes.clear();
}
} //namespace fightdude
