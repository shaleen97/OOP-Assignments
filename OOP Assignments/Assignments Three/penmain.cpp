#include "pen.h"
#include "fountainPen.h"
#include "rollerpen.h"
//!TODO: remove the 'virtual' keyword from the methods, compile,
//       run and take note of the results.


using namespace std;

void WriteWithPen(Pen &pen){
  cout << pen.drawLine() << endl;
  cout << pen.drawCircle() << endl;
}
int main(){
  FountainPen fp;
  WriteWithPen(fp);
  RollerBallPen rbp("A Pen that Uses a Roller Ball");
  WriteWithPen(rbp);
  Pen pen;
  WriteWithPen(pen);
  return 0;
}