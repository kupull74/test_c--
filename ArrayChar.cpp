#include <iostream>
using namespace std;

int main()
{
    char greeting[5] = {'H', 'e', 'l', 'l', 'o'};
    cout << "Greeting message: " << greeting << endl;
    char wouldwithoutnull[6] = {'W', 'o', 'r', 'l', 'd'};
    cout << "World without null message: " << wouldwithoutnull << endl;
    // World without null message: WorldHello

    short count = 0;
    while (greeting[count] != NULL)
    {
        cout << "with null[" << count << "] : " << greeting[count] << endl;
        count++;
        // with null[0] : H
        // ...
    }
    return 0;
}
