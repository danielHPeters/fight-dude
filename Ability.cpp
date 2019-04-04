#include <utility>
#include "Ability.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param name
 */
Ability::Ability(std::string name): name(std::move(name)) {}

/**
 * Destructor.
 */
Ability::~Ability() = default;

/**
 * Get the name of an action.
 *
 * @return
 */
std::string Ability::getName() const {
  return name;
}

/**
 * Register an action callback.
 *
 * @param action New callback action
 */
void Ability::addAction(const std::function<void()>& action) {
  actions.push_back(action);
}

/**
 * Execute all callback actions.
 */
void Ability::use() {
  for (auto &action : actions) {
    action();
  }
}
} //namespace fightdude
