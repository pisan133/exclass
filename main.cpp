//main.cpp
#include <iostream>
#include "point.h"

using namespace std;

void testPointConstructor() {
  Point p(10, 20);
  cout << p.toString() << endl;
}

void testPoint() {
  Point p;
  p.setX(10);
  p.setY(20);
  cout << "Point(" << p.getX() << "," << p.getY() << ")" << endl;
}

Point *makePoint(int a, int b) {
  Point *pPtr = new Point(a, b);
  return pPtr;
}

void testPointer() {
  Point *p1 = makePoint(10, 20);
  Point *p2 = makePoint(5, 8);
  cout << p1->toString() << endl;
  cout << p2->toString() << endl;
  delete p1;
  delete p2;
}

void testPointCount() {
  Point p1(10, 20);
  Point p2(3, 5);
  Point *pPtr = makePoint(30, 40);
  cout << "1. Number of points created: " << Point::getPointCount() << endl;
  cout << "2. Number of points created: " << p1.getPointCount() << endl;
  cout << "3. Number of points created: " << pPtr->getPointCount() << endl;
  delete pPtr;
}

int main() {
  testPoint();
  testPointConstructor();
  testPointer();
  testPointCount();
  return 0;
}