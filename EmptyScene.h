#ifndef FIGHT_DUDE_EMPTYSCENE_H
#define FIGHT_DUDE_EMPTYSCENE_H

#include "Scene.h"
#include "InputState.h"

namespace fightdude {
class EmptyScene : public Scene<int> {
 public:
  void update(int elapsedTime, InputState inputState) override;
  void render() override;
  void onEnter() override;
  void onExit() override;
};
} //namespace fightdude

#endif //FIGHT_DUDE_EMPTYSCENE_H
