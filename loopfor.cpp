#include <iostream>
using namespace std;

int subFunc()
{

    for (int i = 10; i < 20; ++i)
    {
        cout << " For Syntax results : " << i << endl;
        if (i > 16)
        {
            break;
        }
    }

    return 18;
}

int main()
{
    int a = subFunc();
    cout << " Final value a : " << a << endl;
}