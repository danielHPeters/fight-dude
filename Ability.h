#ifndef FIGHT_DUDE_ABILITY_H
#define FIGHT_DUDE_ABILITY_H

#include <string>
#include <vector>
#include <functional>

namespace fightdude {
/**
 * Ability class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Ability {
 public:
  explicit Ability(std::string name);
  ~Ability();

  std::string getName() const;
  void addAction(const std::function<void()>& action);
  void use();

 private:
  std::string name;
  std::vector<std::function<void()>> actions;
};
} //namespace fightdude

#endif //FIGHT_DUDE_ABILITY_H
