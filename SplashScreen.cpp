#include "SplashScreen.h"

void SplashScreen::show(sf::RenderWindow &window) {
  sf::Texture texture;
  if (!texture.loadFromFile("assets/menu/splash-screen.png")) {
    return;
  }
  texture.setSmooth(true);
  sf::Sprite sprite;
  sprite.setTexture(texture);

  window.draw(sprite);
  window.display();

  sf::Event event{};

  while (window.isOpen()) {
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::EventType::KeyPressed
          || event.type == sf::Event::EventType::MouseButtonPressed
          || event.type == sf::Event::EventType::Closed) {
        return;
      }
    }
  }
}
