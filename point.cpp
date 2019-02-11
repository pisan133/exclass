// point.cpp file
#include <stdexcept>
#include <sstream>
#include "point.h"

using namespace std;

int Point::counter = 0;

// constructor 0 parameter
Point::Point() : x{0}, y{0} {
  ++counter;
}

// constructor using initialization list
Point::Point(int x, int y) {
  if (x >= 0 && y >= 0) {
    Point::x = x;
    Point::y = y;
    ++counter;
  } else {
    throw invalid_argument("x and y have to be 0 or a positive number");
  }
}

int Point::getPointCount() {
  return counter;
}

string Point::toString() const {
  ostringstream out;
  out << "Point(" << x << "," << this->y << ")";
  return out.str();
}

int Point::getX() const {
  return x;
}
int Point::getY() const {
  return y;
}

void Point::setX(int x) {
  if (x >= 0)
    Point::x = x;
  else
    throw invalid_argument(" x has to be 0 or a positive number");
}

void Point::setY(int newy) {
  if (newy >= 0)
    this->y = newy;
  else
    throw invalid_argument("y has to be 0 or a positive number");
}
