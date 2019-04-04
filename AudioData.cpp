#include <utility>
#include "AudioData.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id
 * @param createdAt
 * @param updatedAt
 * @param sourceFile
 * @param name
 * @param authorName
 * @param frequency
 * @param bitrate
 */
AudioData::AudioData(
    std::string id,
    std::string createdAt,
    std::string updatedAt,
    std::string sourceFile,
    std::string name,
    std::string authorName,
    float frequency,
    float bitrate
) : Entity(std::move(id), std::move(createdAt), std::move(updatedAt)),
    sourceFile(std::move(sourceFile)),
    name(std::move(name)),
    authorName(std::move(authorName)),
    frequency(frequency),
    bitrate(bitrate) {}

/**
 * Destructor.
 */
AudioData::~AudioData() = default;

/**
 *
 * @return
 */
std::string AudioData::getSourceFile() const {
  return sourceFile;
}

/**
 *
 * @return
 */
std::string AudioData::getName() const {
  return name;
}

/**
 *
 * @return
 */
std::string AudioData::getAuthorName() const {
  return authorName;
}

/**
 *
 * @return
 */
float AudioData::getFrequency() const {
  return frequency;
}

/**
 *
 * @return
 */
float AudioData::getBitrate() const {
  return bitrate;
}
} //namespace fightdude
