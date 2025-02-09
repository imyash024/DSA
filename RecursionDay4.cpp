#include <iostream>
#include <string.h>
using namespace std;
void printRevString(char* str, int size)
{
   
    if(str[0] == '\0')
    {
        return ;
    }
    cout<< "Real String is " << str << endl;
    cout<< "size of the string is " << size << endl;

    printRevString(str+1, size-1);
    cout<< str[0];
}


int main()
{
    char str[] = "hello";
    printRevString(str, strlen(str));
    
}