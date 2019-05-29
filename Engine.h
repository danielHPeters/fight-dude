#ifndef FIGHT_DUDE_ENGINE_H
#define FIGHT_DUDE_ENGINE_H

#include <map>
#include <string>
#include "InputState.h"
#include "Scene.h"

namespace fightdude {
/**
 * Game Engine class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Engine {
 public:
  Engine();
  ~Engine();

  void start(int argc, char *argv[]);
  void stop();
  bool isRunning();

 private:
  bool running;
  std::map<std::string, Scene<double>> states;
  Scene<double> *currentState;

  void update();
};
} //namespace fightdude

#endif //FIGHT_DUDE_ENGINE_H
