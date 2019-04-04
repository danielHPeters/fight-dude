#ifndef FIGHT_DUDE_GAMEENTITY_H
#define FIGHT_DUDE_GAMEENTITY_H

#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Entity.h"

namespace fightdude {
/**
 * GameEntity base class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class GameEntity : public Entity {
 public:
  explicit GameEntity(std::string id, std::string createdAt, std::string updatedAt, std::string fileName);
  ~GameEntity() override;

  virtual void load();
  virtual void render(sf::RenderWindow &window);
  virtual void update(double elapsedTime);
  virtual sf::Sprite &getSprite();
  virtual sf::Vector2f getPosition() const;
  virtual void setPosition(sf::Vector2f position);
  virtual bool isLoaded() const;

 protected:
  sf::Texture texture;
  sf::Sprite sprite;
  std::string fileName;
  bool loaded;
};
} //namespace fightdude

#endif //FIGHT_DUDE_GAMEENTITY_H
