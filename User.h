#ifndef FIGHT_DUDE_USER_H
#define FIGHT_DUDE_USER_H

#include <string>
#include "Entity.h"

namespace fightdude {
/**
 * User class.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class User : Entity {
 public:
  User(
      std::string id,
      std::string createdAt,
      std::string updatedAt,
      std::string name,
      std::string firstName,
      std::string username,
      std::string email,
      std::string password
  );
  ~User() override;

  std::string getName() const;
  std::string getFirstName() const;
  std::string getUsername() const;
  std::string getEmail() const;
  std::string getPassword() const;

 private:
  std::string name;
  std::string firstName;
  std::string username;
  std::string email;
  std::string password;
};
} //namespace fightdude

#endif //FIGHT_DUDE_USER_H
