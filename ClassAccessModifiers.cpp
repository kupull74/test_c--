#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
using namespace std;
#include <dirent.h>
#include <stdlib.h>
#include <fcntl.h>

class Box {
public:
double length;
void setWidth(double param_width) { width = param_width; }
double getWidth(void);
void setLength(double length) { this->length = length; };
private:
double width;
};
double Box::getWidth(void) { return width; } // Scope resolution operator (::)
int main() {
Box BoxSecond; // Declare BoxSecond of type Box
BoxSecond.setWidth(1324524524350.0); BoxSecond.length = 121345134513451.0;
// volume = BoxSecond.width * BoxSecond.length; // Error
double volume = BoxSecond.getWidth() * BoxSecond.length;
cout << "Volume of BoxSecond : " << volume << endl;
// Volume of BoxSecond : 2.65133e-313
return 0;
}