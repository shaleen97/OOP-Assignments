#include <iostream>
#include <string>
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
using namespace std;

int main(int argc, char **argv){
  Square sq(10);
  cout << "Square area: " << sq.area() << endl;
  Triangle t1(3, 6), t2;
  cout << "Triangle 1 area: " << t1.area()
    //!FIXME: t1.getName()
       << " Name: " << t1.getName() << endl;
  cout << "Triangle 2 area: " << t2.area()
       << " Name: " << t2.getName() << endl;
  return 0;
}