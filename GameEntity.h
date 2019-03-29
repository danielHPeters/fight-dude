#ifndef FIGHT_DUDE_GAMEENTITY_H
#define FIGHT_DUDE_GAMEENTITY_H

#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

namespace fightdude {
/**
 * GameEntity base class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class GameEntity {
 public:
  explicit GameEntity(std::string id, std::string fileName);
  virtual ~GameEntity();
  virtual void load();
  virtual void render(sf::RenderWindow &window);
  virtual void update(float elapsedTime);
  virtual std::string getId() const;
  sf::Sprite &getSprite();
  virtual sf::Vector2f getPosition() const;
  virtual void setPosition(sf::Vector2f position);
  virtual bool isLoaded() const;

 protected:
  std::string id;
  sf::Texture texture;
  sf::Sprite sprite;
  std::string fileName;
  bool loaded;
};
} // namespace fightdude

#endif // FIGHT_DUDE_GAMEENTITY_H
