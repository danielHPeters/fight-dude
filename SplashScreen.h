#ifndef FIGHT_DUDE_SPLASHSCREEN_H
#define FIGHT_DUDE_SPLASHSCREEN_H

#include <SFML/Graphics.hpp>

namespace fightdude {
/**
 * Game splash screen.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class SplashScreen {
 public:
  static void show(sf::RenderWindow &window);
};
} // namespace fightdude

#endif // FIGHT_DUDE_SPLASHSCREEN_H
