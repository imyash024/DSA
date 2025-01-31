#include <iostream>
#include <vector>
using namespace std;

/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/




class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int end = row*col -1;
        int rowIndex, colIndex;
        int mid = start + (end-start)/2;
        while(start <= end)
        {
            mid = start +(end-start)/2;
            rowIndex = (mid/col);
            colIndex = mid - (col*rowIndex);
            cout<< matrix[rowIndex][colIndex] <<" ";
            if(matrix[rowIndex][colIndex] == target )
            {
                return 1;
            }
            else if(target> matrix[rowIndex][colIndex])
            {
                start = mid +1;
            }
            else
            {
                end = mid -1;
            }
        }
        return 0;
    }
};

int main()
{
    return 0;
}
