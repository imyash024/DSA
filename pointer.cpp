#include <iostream>
using namespace std;

int main() {
    // creating 2 d array dynamically
    int row, col;
    cin >> row;
    cin >> col;

    int** arr = new int* [row];
    for(int i = 0; i < row; i++)
    {
        *(arr + i) = new int[col];
    }
    // taking input in the dynamically allocated array
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cin >> arr[i][j];

        }
        
    }
    
    // printing the array
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}