#include <iostream>
using namespace std;

float TestSub()
{
    int first = 100;
    if (first == 10)
    {
        cout << " Value of first is : " << first << endl;
    }
    else if (first == 30)
    {
        cout << " Value of first is : " << first << endl;
    }
    else
    {
        cout << " Value of first is finally : " << first << endl;
    }

    return 44.75;
}

int main()
{
    //int first = 100;
    float i = TestSub();
    cout << " exact value of first is : " << i << endl;
    return 0;
}