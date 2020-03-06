#include <utility>
#include "Window.h"

namespace fightdude {
/**
 * Constructor.
 *
 * @param title
 * @param position
 * @param width
 * @param height
 * @param mode
 */
Window::Window(std::string title, Vector2<std::uint32_t> position, std::uint32_t width, std::uint32_t height, Mode mode)
    : title(std::move(title)), position(position), width(width), height(height), mode(mode) {}

/**
 * Set window mode.
 *
 * @param mode
 */
void Window::setMode(Mode mode) {
  this->mode = mode;
}
} //namespace fightdude
