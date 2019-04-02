#ifndef FIGHT_DUDE_AUDIODATA_H
#define FIGHT_DUDE_AUDIODATA_H

#include <string>
#include "Entity.h"

namespace fightdude {
class AudioData : Entity {
 protected:
  AudioData(
      std::string id,
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
} // namespace fightdude

#endif //FIGHT_DUDE_AUDIODATA_H
