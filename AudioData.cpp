#include <utility>
#include "AudioData.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id            Entity id
 * @param sourceFile    Source file of the audio data
 * @param name          Name of the audio data resource
 * @param authorName    Author name of the audio data
 * @param frequency     Frequency of the audio data
 * @param bitrate       Bitrate of the audio data
 */
AudioData::AudioData(
    std::string id,
    std::string sourceFile,
    std::string name,
    std::string authorName,
    double frequency,
    double bitrate
) : Entity(std::move(id)),
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
 * Getter for AudioData frequency.
 *
 * @return Audio frequency
 */
std::string AudioData::getSourceFile() const {
  return sourceFile;
}

/**
 * Getter for the name of audio data resource.
 *
 * @return Name of the audio data resource
 */
std::string AudioData::getName() const {
  return name;
}

/**
 * Getter for the name of the audio data author.
 *
 * @return Author name of audio data
 */
std::string AudioData::getAuthorName() const {
  return authorName;
}

/**
 * Getter for the frequency of the audio data.
 *
 * @return Frequency of the audio data
 */
float AudioData::getFrequency() const {
  return frequency;
}

/**
 * Getter for the bitrate of the audio data.
 *
 * @return Bitrate of the audio data
 */
float AudioData::getBitrate() const {
  return bitrate;
}
} //namespace fightdude
