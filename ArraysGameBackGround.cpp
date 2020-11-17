#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{

  char array[3][4];

  int row, column;
  char char_row, char_column;
  cout << "Make a Game Background: " << endl;
  cin >> row >> column;
  char_row = '~';
  char_column = '!';

  cout << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)

    {
      cout << "\t" << char_row;
    }
    cout << endl;
  }
}

