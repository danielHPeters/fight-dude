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
  Paddle(std::string id, std::string createdAt, std::string updatedAt, std::string fileName);
  ~Paddle() override;

  void render(sf::RenderWindow &renderWindow) override;
  void update(double elapsedTime) override;
  double getVelocity() const;

 private:
  double velocity;
  double maxVelocity;
  double friction;
};
} //namespace fightdude

#endif //FIGHT_DUDE_PADDLE_H
