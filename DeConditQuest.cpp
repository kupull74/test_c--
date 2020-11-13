#include <iostream>
#include "FunctionCaller.cpp"
using namespace std;

int SubQuest(int x)
{
    if (x < 10)
    {
        
        return 40;
        
    }
    
}

int SubQuest1(int x)
{
    x = (x > 10) ? 30 : 40;
   

    return x;
}

int main()
{
    int i = SubQuest(i);
    int a = SubQuest1(a);
    cout << " Value of x: " << i << endl;
    cout << " Value of x: " << a << endl;
    return 0;
}