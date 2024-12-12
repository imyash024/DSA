#include <iostream>
using namespace std;
#include <vector>
/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:


Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 

Constraints:

n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int order= matrix.size();
        
        //index intialziation
        int startingRow = 0;
        int endingRow  = order -1;
        int startingCol = 0;
        int endingCol =  order -1;
        while(startingRow < endingRow)
        {
            for(int i = 0; i < (endingCol-startingCol); i++)
            {
                swap(matrix[startingRow][startingCol+i], matrix[startingRow+i][endingCol]);
                swap(matrix[endingRow][endingCol-i], matrix[endingRow-i][startingCol]);
                swap(matrix[endingRow][endingCol-i],matrix[startingRow][startingCol+i]);
            }
            startingRow++;
            startingCol++;
            endingRow--;
            endingCol--;
        }
        
    }
};

int main()
{
    vector<vector<int>> v = {{1,2,3,4,}, {1,2,5,7}};
    
}