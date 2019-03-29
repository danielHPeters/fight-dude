//
// Created by daniel on 11.10.17.
//

#ifndef FIGHT_DUDE_ENGINE_H
#define FIGHT_DUDE_ENGINE_H

#include "Input.h"

namespace fightdude {
/**
 * Game Engine class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Engine {
 private:
  Input input;

 public:
  void start();
  void update();
};
} // namespace fightdude

#endif // FIGHT_DUDE_ENGINE_H
