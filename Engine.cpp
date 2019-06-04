#include "Engine.h"

namespace fightdude {
/**
 * Constructor.
 */
Engine::Engine() : running(false), currentState() {}

/**
 * Destructor.
 */
Engine::~Engine() = default;

/**
 * Fire up the engine.
 */
void Engine::start(int argc, char *argv[]) {
  this->running = true;
}

/**
 * Stop the engine.
 */
void Engine::stop() {
  this->running = false;
}

/**
 * Check if the engine is running.
 *
 * @return true when started and not stopped
 */
bool Engine::isRunning() {
  return this->running;
}

void Engine::update() {}
} //namespace fightdude
