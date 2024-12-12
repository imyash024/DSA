
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for(int i = 2; i < (n/2) +1; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int n;
    cin >> n;
    if(isPrime(n))
    {
        cout<< "It is Prime number \n";
    }
    else
    {
        cout<< "It is not a Prime number\n";
    }
    return 0;
}