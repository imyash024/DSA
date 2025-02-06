#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 2 || n == 1)
    {
        return n-1;
    }
    return fib(n-1) + fib(n-2);
    
}

void reachHome(int src, int dest)
{
    cout<< "Source " << src << " Destination" << dest << endl; 
    if (src == dest)
    {
        cout<< "pahuch Gaya "<< endl;
        return;
    }
    reachHome(++src, dest);
   

    
}

int main() {
    int src = 0;
    int dest = 10;
    reachHome(src, dest);
    int ans = fib(7);
    cout<< endl << "Answer is " << ans << endl;
}