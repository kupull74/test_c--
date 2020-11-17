#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int var = 1;     // actual variable declaration.
    int *ptr_first;   // pointer variable
    ptr_first = &var; // store address of var in pointer variable
    cout << "var variable: " << var << ", address : " << &var << endl;
    // var variable: 20, address : 0x7fff5de67998

    cout << "ptr_first variable: " << ptr_first << ", address : " << &ptr_first << endl;
    // ptr_first variable: 0x7fff5de67998, address : 0x7fff5de67990

    /* access the value at the address available in pointer */
    cout << "Value of *ptr_first variable: " << *ptr_first << ", address : " << &(*ptr_first) << endl;
    // Value of *ptr_first variable: 20, address : 0x7fff5de67998

    // *ptr_first는 var의 값을 참조. = 둘 다 1
    // &ptr_first는 얘 자체의 물리주소값
    // ptr_first는 var의 물리주소값 참조. 즉 &var와 ptr_first는 같음.
    return 0;
}