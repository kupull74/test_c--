#include <iostream>
#include "FunctionCaller.cpp"
using namespace std;

int sum()

{
    return 0;
} 

int subCall()
{
    return 0;
} 

int main()
{
    int a = sum(100, 200);
    int b = subCall(200, 300);
    cout << " Total value is : " << a << endl;
    cout << " Total value is : " << b << endl;
}