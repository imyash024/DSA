#include <iostream>
using namespace std;
int arrSum(int arr[], int size, int sum = 0)
{
    if (size == 0)
    {
        return sum;
    }
    sum = sum + arr[0];
    return arrSum(arr + 1, size -1, sum);
    
    

}

int main() 
{
    int arr[] = {1,3,4,5};
    int size = 4;
    int ans = arrSum(arr, size); 
    cout << "The sum of array is " << ans << endl;
}