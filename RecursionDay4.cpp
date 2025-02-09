#include <iostream>
#include <string.h>
using namespace std;
void RevString(char* str, int start, int end)
{
    if (start > end)
    {
        return;
    }
    swap(str[start], str[end]);
    start++;
    end--;
    RevString(str, start, end);
    
   
    
}


int main()
{
    char str[] = "hello";
    cout<< str << endl;
    RevString(str, 0 , strlen(str)-1);
    cout<< str << endl;
}