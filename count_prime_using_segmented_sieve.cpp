#include<iostream>
#include <vector>
#include <math.h>
using namespace std;
/*
Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106




*/

class Solution {
private:
vector <bool> sieve_erato(int n)
{
    vector <bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= n; i++)
    {
        if(isPrime[i])
        {
            for(int j = 2; i*j <= n; j++)
            {
                isPrime[i*j]= false;
            }
        }
    }
    return isPrime;
}
public:
    int countPrimes(int n) {
        int squareRoot = sqrt(n);
        int count = 0;
        vector <bool> prime(squareRoot + 1);
        vector <bool> primes(n+1, true);
        primes[0]= primes[1] = false;
        prime = sieve_erato(squareRoot);
        for(int i = 0; i <= squareRoot; i++)
        {
            if(prime[i])
            {
                
                for(int j = 2; j*i <=n; j++)
                {
                    primes[j*i] = false;
                }
            }
        }
        for(int i = 0; i < n; i++ )
        {
            if(primes[i])
            {
                // cout<< i << " ";
                count++;
            }
        }
        return count;
        
    }
};


int main(){

}