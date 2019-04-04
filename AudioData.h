#ifndef FIGHT_DUDE_AUDIODATA_H
#define FIGHT_DUDE_AUDIODATA_H

#include <string>
#include "Entity.h"

namespace fightdude {
/**
 * Audio data definition class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class AudioData : Entity {
 public:
  AudioData(
      std::string id,
      std::string createdAt,
      std::string updatedAt,
      std::string sourceFile,
      std::string name,
      std::string authorName,
      float frequency,
      float bitrate
  );
  ~AudioData() override;

  std::string getSourceFile() const;
  std::string getName() const;
  std::string getAuthorName() const;
  float getFrequency() const;
  float getBitrate() const;

 private:
  std::string sourceFile;
  std::string name;
  std::string authorName;
  float frequency;
  float bitrate;
};
} //namespace fightdude

#endif //FIGHT_DUDE_AUDIODATA_H
