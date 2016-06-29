#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "shape.h"
class Triangle : public Shape{
    std::string name;

 public:

 Triangle(std::string name = "Nice Triangle!") : Shape(name){}

 
 std::string getName();
 };

#endif
 