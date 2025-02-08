#include <iostream>
using namespace std;
bool binarySearch(int*arr, int s, int e, int k)
{
    if (s>e)
    {
        return false;
    }
    
    int mid = s + ((e - s)/2);
    if(arr[mid] == k)
    {
        return true;
    }
    else if (arr[mid] > k)
    {
        binarySearch(arr, s, mid-1, k);
    }
    else
    {
        binarySearch(arr, mid + 1, e, k);
    }
    
}

int main()
{
    
    
}