#ifndef FIGHT_DUDE_SERIALIZER_H
#define FIGHT_DUDE_SERIALIZER_H

namespace fightdude {
/**
 * Basic serializer class.
 *
 * @tparam T Entity Type
 * @author Daniel Peters
 * @version 1.0
 */
template <class T>
class Serializer {
 public:
  enum Format {
    JSON, XML, YAML
  };

  explicit Serializer(Serializer::Format format = Serializer::Format::JSON);
  ~Serializer();

  T load();
  void save(T &entity);

 private:
  Serializer::Format format;
};
} //namespace fightdude

#endif //FIGHT_DUDE_SERIALIZER_H
