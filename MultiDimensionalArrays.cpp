#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int row, column;
    char char_row, char_column;
    cout << "Enter Row and Column: " << endl;
    cin >> row >> column;
    char_row = '~';
    char_column = '!';     //여기까지는 이해

    char **ptr_matrix = new char *[row]; // Dynamic Allocation 이게 뭐라고?
    for (int i = 0; i < row; i++)
        
        ptr_matrix[i] = new char[column];
    cout << "Matrix Size : " << row * column << endl;
    
    for (int i = 0; i < row; i++) // output each array element's value
        for (int j = 0; j < column; j++)
        {   
            
            ptr_matrix[i][j] = char_row;
            
            
        }
    for (int i = 0; i < row; i++) {// output each array element's value
        
        for (int j = 0; j < column; j++)
        {
            // cout << "ptr_matrix[" << i << "][" << j << "]: " << &ptr_matrix[i][j] << endl;
            
            cout << "\t" << ptr_matrix[i][j];
            
        }
        cout << endl;
    }
    delete[] ptr_matrix;
    return 0;
}