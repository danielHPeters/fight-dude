#include <utility>
#include "User.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param id        Entity id
 * @param name      Family name of user
 * @param firstName First name of user
 * @param username  Login name of user
 * @param email     Email of user
 * @param password  Password of user
 */
User::User(
    std::string id,
    std::string name,
    std::string firstName,
    std::string username,
    std::string email,
    std::string password
) : Entity(std::move(id)),
    name(std::move(name)),
    firstName(std::move(firstName)),
    username(std::move(username)),
    email(std::move(email)),
    password(std::move(password)) {
}

/**
 * Destructor.
 */
User::~User() = default;

/**
 * Getter for family name of user.
 *
 * @return Family name of user
 */
std::string User::getName() const {
  return name;
}

/**
 * Getter for first name of user.
 *
 * @return First name of user
 */
std::string User::getFirstName() const {
  return firstName;
}

/**
 * Getter for username of user.
 *
 * @return Username
 */
std::string User::getUsername() const {
  return username;
}

/**
 * Getter for user email.
 *
 * @return Email of user
 */
std::string User::getEmail() const {
  return email;
}

/**
 * Getter for user password.
 *
 * @return Password of user
 */
std::string User::getPassword() const {
  return password;
}
} //namespace fightdude
