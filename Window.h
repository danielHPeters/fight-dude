#ifndef FIGHT_DUDE_WINDOW_H
#define FIGHT_DUDE_WINDOW_H

#include <cstdint>
#include <string>
#include "Vector2.h"

namespace fightdude {
class Window {
 public:
  enum Mode {
    FULLSCREEN,
    WINDOWED,
    WINDOWED_BORDERLESS
  };

  Window(
      std::string title,
      Vector2<std::uint32_t> position,
      std::uint32_t width,
      std::uint32_t height,
      Mode mode = Mode::WINDOWED
  );

  virtual void open() = 0;
  virtual void close() = 0;
  virtual void resize() = 0;
  virtual void setMode(Window::Mode mode);

 private:
  std::string title;
  Vector2<std::uint32_t> position;
  std::uint32_t width;
  std::uint32_t height;
  Mode mode;
};
} //namespace fightdude

#endif //FIGHT_DUDE_WINDOW_H
