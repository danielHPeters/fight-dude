#include "Game.h"

/**
 * Main application method.
 *
 * @param argc number of command line arguments
 * @param argv The command line arguments
 * @return exit code
 */
int main(int argc, char *argv[]) {
  fightdude::Game game;

  game.start();

  return EXIT_SUCCESS;
}
