#include <iostream>
#include <vector>
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


/*
This can be soloved using normal approach but in that case it will time exceed error for the edge  case;
*/


class Solution {
public:
    int countPrimes(int n) {
        // solution of code using sieve of eratosthense 
        vector <bool> isPrime(n+1, true);
        int count = 0;
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i < n; i++)
        {
            if(isPrime[i])
            {
                count++;
                for(int j = 1; j*i < n; j++)
                {
                    isPrime[i*j] = false;
                }
            }
        }  
        return count;      
    }
};


int main() {
    return 0;
}