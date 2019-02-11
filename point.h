// point.h file
#ifndef POINT_H
#define POINT_H

#include <string>

class Point {

 public:

  // constructor 0 parameter
  Point();

  // constructor
  Point(int x, int y);

  std::string toString() const ;

  int getX() const;
  void setX(int x);
  int getY() const;
  void setY(int newy);

  static int getPointCount();

 private:
  static int counter;
  int x;
  int y;
};

#endif
