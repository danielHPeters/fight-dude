#include "SplashScreen.h"

namespace fightdude {
/**
 * Display SplashScreen.
 *
 * @param window Splash screen window
 */
void SplashScreen::show(sf::RenderWindow &window) {
  sf::Texture texture;
  bool textureLoaded = texture.loadFromFile("./../assets/menu/splash-screen.png");

  if (textureLoaded) {
    texture.setSmooth(true);
    sf::Sprite sprite;
    sprite.setTexture(texture);

    window.draw(sprite);
    window.display();

    sf::Event event{};
    bool shouldHide = false;

    while (window.isOpen() && !shouldHide) {
      while (window.pollEvent(event)) {
        if (event.type == sf::Event::EventType::KeyPressed
            || event.type == sf::Event::EventType::MouseButtonPressed
            || event.type == sf::Event::EventType::Closed) {
          shouldHide = true;
        }
      }
    }
  }
}
} //namespace fightdude
