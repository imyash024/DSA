#include <iostream>
using namespace std;
bool linearSearch(int * arr, int size , int element)
{
    if(size == 0)
    {
        return false;
    }
    if(element == arr[0])
    {
        return true;
    }
    linearSearch(arr +1, size-1, element);
}



int main() {
    int arr[] = {1,2,4,83,3};
    int size = 5;
    int element = 83;
    bool isPresent = linearSearch(arr, size, element);
    if (isPresent)
    {
        cout << element << " is present in the array" << endl;
    }
    else
    {
        cout<< element << " is not presnt in the array" << endl;
    }
    

    return 0;
}