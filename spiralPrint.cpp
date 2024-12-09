#include <iostream>
#include <vector>
using namespace std;
/*
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int noRows = matrix.size();
        int noCol = matrix[0].size();

        //index intialization
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = noRows -1;
        int endingCol = noCol -1;
        
        int count = 0;
        int total = noRows * noCol;
        while(count < total)
        {
            // storing starting row elements
            for(int index = startingCol; (count < total) && index <= endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            // storing last col elements 
            for(int i = startingRow; (count < total) &&i <= endingRow; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            // storing last row elements
            for(int i = endingCol; (count < total) && (i >= startingCol); i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            // storing elements of starting col
            for(int i = endingRow; (count < total)&& i >= startingRow;i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
            
        }
        return ans;
    }
};
int main() 
{
    

    return 0;
}