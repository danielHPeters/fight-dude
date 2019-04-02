#ifndef FIGHT_DUDE_RECTANGLE_H
#define FIGHT_DUDE_RECTANGLE_H

namespace fightdude {
class Rectangle {
 public:
  Rectangle(double left, double right, double top, double bottom);
  ~Rectangle();

  void set(double left, double right, double top, double bottom);
  bool within(Rectangle &other) const;
  bool overlaps(Rectangle &other) const;
  double getWidth() const;
  double getHeight() const;

 private:
  double left;
  double right;
  double top;
  double bottom;
};
} // namespace fightdude

#endif // FIGHT_DUDE_RECTANGLE_H
