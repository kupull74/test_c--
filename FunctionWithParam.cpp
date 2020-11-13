#include <iostream>
#include "FunctionWithoutParam.cpp"
using namespace std;

int max(int, int);

int SubFunc()
{
    int first;
    cout << "Input : first = ";
    cin >> first;

    int second;
    cout << "Input : second = ";
    cin >> second;

    int result;
    result = max(first, second);
    //cout << " Max value is : " << result << endl;
    //cout << " Max value is : " << max(first, second) << endl;
    return first, second;
}

int main()
{
    int a = SubFunc();
    cout << " Final Max Value is : " << a << endl;
    cout << " Final Max Value is : " << a << endl;
    return 0;
}
