#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char grade = 'A';
    switch(grade) {
        case 'A':
        case 'B':
        case 'C': cout << " Well Done " << endl;
        break;
    
    default:
        cout << "Invalid Grade" << endl;
    }
    return 0;
}