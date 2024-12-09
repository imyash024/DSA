#include <iostream>
#include <limits.h>
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
int largestRowSum(int arr[][3], int row , int col)
{
    
    int largestsum = INT_MIN;
    int ans = 0;
    for (int  i = 0; i < row; i++)
    {
        int sum = 0;
        for (int  j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > largestsum )
        {
            largestsum = sum;
            ans = i;
        }
        
        
    }
    
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
    int largestRowSumIndex = largestRowSum(arr, 2,3);
    cout << largestRowSumIndex;
    /*
    Problem statement
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

For eg:-

The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 10
1 <= N <= 100
1 <= M <= 100
0 <= ARR[i][j] <= 100

Time Limit: 1sec
Sample Input 1:
2
3 4
1 2 3 4
5 6 7 8
9 10 11 12
4 4
1 2 4 5
3 6 8 10
11 12 13 15
16 14 9 7
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
1 3 11 16 14 12 6 2 4 8 13 9 7 15 10 5 
Explanation For Sample Input 1:
Here, the elements are printed in a form of a wave, first, the 0th column is printed from top to bottom then the 1st column from bottom to top, and so on. Basically, the even column is printed from top to bottom and the odd column in the opposite direction.
Sample Input 2:
2
1 1
3
1 2
6 5
Sample Output 2:
3
6 5 
    */
    
    


    
}