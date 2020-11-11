#include <iostream>
/* 
This is first Comment
*/
using namespace std;

/*enum enum-name { list of names } var-list;
*/

int main() {
    enum weekend { Monday, Tuesday, Friday=4, Saturday } enumRed;
    enumRed = weekend::Monday;
    //cout << "Monday : " << enumRed << "\t";
    //cout << "Tuesday : " << enumRed << "\t";
    //cout << "Friday : " << enumRed << "\t";
    // EnumeratedTypes.
    return 0;
}
