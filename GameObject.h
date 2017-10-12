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
  virtual void setPosition(sf::Vector2f position);

private:
  sf::Texture texture;
  sf::Sprite sprite;
  std::string filename;
  bool loaded;
};


#endif //FIGHT_DUDE_GAMEOBJECT_H
