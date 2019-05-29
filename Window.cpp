#include <utility>
#include "Window.h"

namespace fightdude {
Window::Window(std::string title, Vector2<uint32_t> position, std::uint32_t width, std::uint32_t height, Mode mode)
    : title(std::move(title)), position(position), width(width), height(height), mode(mode) {}

void Window::setMode(Mode mode) {
  this->mode = mode;
}
} //namespace fightdude
