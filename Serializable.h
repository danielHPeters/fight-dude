#ifndef FIGHT_DUDE_SERIALIZABLE_H
#define FIGHT_DUDE_SERIALIZABLE_H

namespace fightdude {
/**
 * Interface for serializable classes.
 *
 * @tparam T Serializable type
 * @author Daniel Peters
 * @version 1.0
 */
template<class T>
class Serializable {
 public:
  virtual void serialize(T data) = 0;
  virtual T deserialize() = 0;
};
} //namespace fightdude

#endif //FIGHT_DUDE_SERIALIZABLE_H
