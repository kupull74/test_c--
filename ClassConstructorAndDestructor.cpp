#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
using namespace std;
#include <dirent.h>
#include <stdlib.h>
#include <fcntl.h>

class Line {
public:
void setLength(double len);
double getLength(void);
Line();
Line(double len);
~Line();
private: double length;
};

Line::Line(void) {cout << " Created " << endl;}
Line::Line(double len) {cout << " Created, length = " << len << endl; length = len;}
Line::~Line(void) {cout << " Object is being deleted " << endl;}
void Line::setLength(double len) {length = len;}
double Line::getLength(void) {return length;}

int main(){
    Line lineFirst;
    lineFirst.setLength(6.0);
    cout << "Length of lineFirst : " << lineFirst.getLength() << endl;
    Line lineSecond(10.0);
    cout << "Length of lineSecond : " << lineSecond.getLength() << endl;
    lineFirst.~Line();
    lineSecond.~Line();
    return 0;

}