#include <iostream>
using namespace std;

int Input()
{
    int number;

    cout << "Input Number: = ";
    cin >> number;

    return number;
}

int Add(int number, int number1)
{
    return number + number1;
}

int Subtr(int number, int number1)
{

    return number - number1;
    ;
}

int Multi(int number, int number1)
{

    return number * number1;
}

int Divis(int number, int number1)
{

    return number / number1;
}

int Total()
{
    int num1, num2;
    char ch;
    while (1)
    {

        num1 = Input();
        num2 = Input();

        //cout << num1 << endl;
        //cout << num2 << endl;
        cout << "------------------------------------------" << endl;
        cout << " Addtion Result : " << Add(num1, num2) << endl;
        cout << " Subtraction Result : " << Subtr(num1, num2) << endl;
        cout << " Multiplication Result : " << Multi(num1, num2) << endl;
        cout << " Division Result : " << Divis(num1, num2) << endl;
        cout << "------------------------------------------" << endl;

        cout << " Do you want To Continue the Calculation? " << ch;
        cin >> ch;
        if (ch == 'N')
        
        {
            cout << " End of Calculation! " << endl;
            break;
        }
    }
    return 0;
}
