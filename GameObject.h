//
// Created by daniel on 12.10.17.
//

#ifndef FIGHT_DUDE_GAMEOBJECT_H
#define FIGHT_DUDE_GAMEOBJECT_H

#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class GameObject {
public:
  GameObject();
  virtual ~GameObject();

  virtual void load(std::string filename);
  virtual void draw(sf::RenderWindow &window);
  virtual void update(float elapsedTime);
  virtual sf::Vector2f getPosition() const;
  virtual void setPosition(sf::Vector2f position);
  virtual bool isLoaded() const;

protected:
  sf::Sprite& getSprite();

private:
  sf::Texture texture;
  sf::Sprite sprite;
  std::string filename;
  bool loaded;
};


#endif //FIGHT_DUDE_GAMEOBJECT_H