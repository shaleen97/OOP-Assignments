#ifndef SQUARE_H
#define SQUARE_H
#include <string>
#include "rectangle.h"
class Square : public Rectangle{
public:
  Square(int side);
};
Square::Square(int side): Rectangle("Square", side, side){}

#endif