#include "Serializer.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @tparam T Entity type
 * @param format Serialization format
 */
template<class T>
Serializer<T>::Serializer(Serializer::Format format) : format(format) {}

/**
 * Destructor.
 *
 * @tparam T Entity type
 */
template<class T>
Serializer<T>::~Serializer() = default;

/**
 * Loads an entity of type T.
 *
 * @tparam T Entity type
 * @return Entity loaded from storage
 */
template<class T>
T Serializer<T>::load() {
  return nullptr;
}

/**
 * Serialize an entity and save to storage.
 *
 * @tparam T Entity type
 * @param entity Serializable entity
 */
template<class T>
void Serializer<T>::save(T &entity) {}
} //namespace fightdude
