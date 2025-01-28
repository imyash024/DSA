#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows " << endl;
    cin >> row;
    int** arr = new int*[row];
    int* colnumber = new int[row];
    for (int i = 0; i < row; i++)
    {
        cout<< "Enter column for row " << i << endl;
        cin >> colnumber[i];
    }

    // creation of jaggered array
    for (int i = 0; i < row; i++)
    {
       arr[i] = new int[colnumber[i]];
    }

    // taking input in the jaggered array
    cout<< "Enter element of the jaggered array " << endl;
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < colnumber[i]; j++)
        {
            cin>> arr[i][j];
        }
        
    }
// printing out the jaggered output 

    cout << "Printing the output of the array " << endl;
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < colnumber[i]; j++)
        {
            cout <<  arr[i][j] << " ";
        }
        cout<< endl;
        
    }
    
    
    
}