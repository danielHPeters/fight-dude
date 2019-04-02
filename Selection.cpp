#include "Selection.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 */
Selection::Selection(std::string id) : Entity(std::move(id)) {}

/**
 * Destructor.
 */
Selection::~Selection() = default;
} // namespace fightdude
