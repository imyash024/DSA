#include <iostream>
using namespace std;
void sayDigit(int n)
{
    int lastdigit = n % 10;
    string mapping[10] = {"zero", "one","two","three","four","five","six","seven","eight","nine"};
    if (n == 0)
    {
        return ;
    }
    sayDigit(n/10);
    cout<< mapping[lastdigit] << " ";
}

int main()
{
    int n;
    cin >> n;
    sayDigit(n);
}