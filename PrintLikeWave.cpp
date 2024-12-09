#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector <int> ans;
    for(int i = 0; i < mCols; i++)
    {
        if((i % 2) == 0)
        {
            for(int k = 0; k < nRows; k++)
            {
                ans.push_back(arr[k][i]);
            }
        }
        else
        {
            for(int k = nRows-1; k >= 0; k--)
            {
                ans.push_back(arr[k][i]);
            }
        }
    }
    return ans;
}

int main() {

}
