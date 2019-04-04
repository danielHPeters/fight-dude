#include <utility>
#include "Selection.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 */
Selection::Selection(std::string id, std::string createdAt, std::string updatedAt)
    : Entity(std::move(id), std::move(createdAt), std::move(updatedAt)) {}

/**
 * Destructor.
 */
Selection::~Selection() = default;
} //namespace fightdude
