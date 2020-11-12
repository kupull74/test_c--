#include <iostream>
#include "FunctionOther.cpp"
using namespace std;

extern int funcOutside();

int i = 5;
int subfunc() {
    int i = funcOutside();
    cout << "return value : " << i << endl;
    
    return 0;
}

int main() {
    int i = subfunc();
    cout << "Scope resolution operator : " << ::i << endl;
    return 0;
}

// int funcInside(); 
// int main() {
//     int i = funcInside(); 
//     cout << "return value :" << i << endl;
//     return 0;
// }

// int funcInside() {
//     cout << "int funcInside()" << endl;
//     return 0;
// }
