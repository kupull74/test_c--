#include <iostream>
using namespace std;

int SubLoop()
{
    int length;
    cout << "Input : first = ";
    cin >> length;

    int length1;
    cout << "Input : second = ";
    cin >> length1;
    for (length; length1 >= length; length = length + 1)
    {
        cout << " Loop : " << length << endl;
    }
    return length;
}
int main()
{
    int a = SubLoop();
    cout << " Loop : " << a << endl;
    cout << "Total Loop is over ";
}