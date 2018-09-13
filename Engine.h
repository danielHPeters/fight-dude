//
// Created by daniel on 11.10.17.
//

#ifndef FIGHT_DUDE_ENGINE_H
#define FIGHT_DUDE_ENGINE_H

#include "Input.h"

/**
 * Game Engine class.
 *
 * @author Daniel Peters <daniel.peters.ch@gmail.com>
 * @version 1.0
 */
class Engine {
 private:
  Input input;

 public:
  void start();
  void update();
};

#endif //FIGHT_DUDE_ENGINE_H
