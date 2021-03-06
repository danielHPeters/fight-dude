#ifndef FIGHT_DUDE_PADDLE_H
#define FIGHT_DUDE_PADDLE_H

#include <string>
#include <SFML/Window.hpp>
#include "GameEntity.h"

namespace fightdude {
/**
 * Player paddle class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Paddle : public GameEntity {
 public:
  Paddle(std::string id, std::string fileName);
  ~Paddle() override;

  void render(sf::RenderWindow &renderWindow) override;
  void update(double elapsedTime) override;
  float getVelocity() const;

 private:
  float velocity;
  float maxVelocity;
  float friction;
};
} //namespace fightdude

#endif //FIGHT_DUDE_PADDLE_H
