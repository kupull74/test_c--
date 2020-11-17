#include <iostream>
#include <string.h>
#include <string>
#define MAX 3
using namespace std;


int main()
{
    int var[MAX] = {10, 100, 200}, *ptr_first = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
        cout << "Pointer var[" << i << "] = " << *ptr_first << ", addr : " << ptr_first << endl;
        ptr_first++; // point to the next location
        // Array var[0] = 10, address : 0x7fff5bc979cc
        // Pointer var[0] = 10, addr : 0x7fff5bc979cc
        
    }
    // int *ptr_second = &var[MAX - 1];
    // for (int i = MAX - 1; i >= 0; i--)
    // {
    //     cout << "Pointer of var[" << i << "] = " << *ptr_second << ", addr : " << ptr_second << endl;
    //     ptr_second--;
    //     // Pointer of var[2] = 1547669, address : 0x7fff5bc979d8 *ptr_first, ptr_first 일 때
    //     // Pointer of var[1] = 1547669, address : 0x7fff5bc979d8
    //     // Pointer of var[0] = 1547669, address : 0x7fff5bc979d8
    // }

    int *ptr_second;
    for (int i = MAX - 1; i >= 0; i--)
    {
        ptr_second = &var[i];
        cout << "...[" << i << "] = " << *ptr_first << ", addr : " << ptr_first << endl;
        // *ptr_first 와 ptr_first 일 때에는 다른값 82896128, addr : 0x7fffffffdc38
    }
    return 0;
}