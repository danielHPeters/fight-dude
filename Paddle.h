//
// Created by daniel on 12.10.17.
//

#ifndef FIGHT_DUDE_PADDLE_H
#define FIGHT_DUDE_PADDLE_H

#include "GameEntity.h"
#include <SFML/Window.hpp>

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
  void update(float elapsedTime) override;
  float getVelocity() const;

 private:
  float velocity;
  float maxVelocity;
};
} // namespace fightdude

#endif // FIGHT_DUDE_PADDLE_H
