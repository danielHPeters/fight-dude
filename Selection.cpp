#include <utility>
#include "Selection.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 */
Selection::Selection(std::string id)
    : Entity(std::move(id)) {}

/**
 * Destructor.
 */
Selection::~Selection() = default;
} //namespace fightdude
