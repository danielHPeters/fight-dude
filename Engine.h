//
// Created by daniel on 11.10.17.
//

#ifndef FIGHT_DUDE_ENGINE_H
#define FIGHT_DUDE_ENGINE_H


#include "Input.h"
#include "Draw.h"
#include "Update.h"

class Engine {
private:
  Input input;
  Draw draw;
  Update update;
public:
  void start();
};


#endif //FIGHT_DUDE_ENGINE_H
