#ifndef FIGHT_DUDE_INPUTSTATE_H
#define FIGHT_DUDE_INPUTSTATE_H

namespace fightdude {
/**
 * Game input class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class InputState {
 public:
  enum Key {
    LEFT
  };

  bool isKeyDown(InputState::Key key);
  void setKeyDown(InputState::Key key);
};
} //namespace fightdude

#endif //FIGHT_DUDE_INPUTSTATE_H
