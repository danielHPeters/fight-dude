#include <utility>
#include "File.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param createdAt Create timestamp
 * @param updatedAt Update timestamp
 * @param name      Filename
 * @param size      Filesize
 */
File::File(std::string id, std::string createdAt, std::string updatedAt, std::string name, std::size_t size)
    : Entity(std::move(id), std::move(createdAt), std::move(updatedAt)), name(std::move(name)), size(size) {}

/**
 * Destructor.
 */
File::~File() = default;

/**
 * Getter for the name of the file.
 *
 * @return  Filename
 */
std::string File::getName() const {
  return name;
}

/**
 * Getter for the file size.
 *
 * @return Filesize
 */
std::size_t File::getSize() const {
  return size;
}

/**
 * Open the file.
 */
void File::open() {}

/**
 * Close the file.
 */
void File::close() {}
} //namespace fightdude
