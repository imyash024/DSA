#include <iostream>
using namespace std;
bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
            
        }
        
    }
    return false;
    
}
void printSumColwise(int arr[][3], int row , int col )
{
    for (int  i = 0; i < col; i++)
    {
        int sum = 0;
        for (int  j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
            
        }
        cout << "Sum of Column " << i << " is :" << sum ;
        cout<< endl;
        
    }
    
}
void printArr(int arr[][3] , int row , int col)
{
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout << endl;
        
    }
    
}
int main() {
    int arr[2][3];
    cout<< "Enter Elements" << endl;
    for (int  row = 0; row < 2; row++)
    {
        for (int  col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    int target;
    cout << "Enter the number you want to search ";
    cin >> target;
    if (isPresent(arr, target, 2, 3 ))
    {
        cout<< "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    int rowSum[2] = {0};
    for (int  row = 0; row < 2; row++)
    {
        for (int  col = 0; col < 3; col++)
        {
            rowSum[row] += arr[row][col]; 
        }
        
    }
    cout<< "Printing Row wise sum: " << endl;
    for (int  i = 0; i < 2; i++)
    {
        cout<< "Row " << i << " Sum is " << rowSum[i] << endl;
    }
    printArr(arr, 2, 3);
    printSumColwise(arr, 2, 3);
    
    
    


    
}