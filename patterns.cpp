#include <iostream>
using namespace std;

int main() {
    /*
    int n;
    cout<< "enter n" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;
        
    }


    new pattern 
   int n;
   cin >> n;
   int i = 1;
   while ( i <= n)
   {
    int j = 1;
    while (j <= n)
    {
        cout << n-j+1;
        j = j +1;
    }
    cout<< endl;
    i = i +1; 
   }
    
    new pattern;
   int n;
   cin>> n;
   int i = 1 , k = 1;
   while (i <= n)
   {
    int j = 1;
    while (j <= n)
    {
        cout << k << " ";
        k = k + 1;
        j = j+1;
    }
    i = i +1;
    cout << endl;
    
   }

   new pattern
   int n;
   cin>> n;
   int i = 1;
   while (i <= n)
   {
    int j = 1;
    while (j <= i)
    {
        cout<< "*";
        j = j +1;
    }
    i = i +1;
    cout << endl;
   }
    int n;
    cin >> n;
    int i = 1;
    while (i <= n )
    {
        int j = 1;
        while (j <= i)
        {
            cout<< i;
            j = j + 1;
        }
        i = i +1;
        cout<< endl;   
    }

    new pattern 
   int n;
   cin >> n;
   int i = 1;
   int count =1;
   while (i <= n)
   {
    int j = 1;
    while (j <= i)
    {
        cout<<count << " ";
        count = count +1;
        j = j +1;

    }
    cout << endl;
    i = i +1;
    
   }
   

   new pattern
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j = 1;
    while (j <= i)
    {
        cout<< i +j -1 << " ";
        j = j +1;
    }
    cout << endl;
    i = i +1;
    
   }
   int n; 
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j = 1;
    while (j <= i)
    {
        cout << i - j +1;

        j = j + 1;

    }
    cout << endl;
    i = i +1;   
   }


   new pattern
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j =1;
    while (j <= n)
    {
        cout<< (char) (64 +i) ;
        j = j+1;
    }
    cout << endl;
    i = i +1;    
   }
   int n ;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j = 1;
    while (j <= n)
    {
        cout << (char) ('A' +j -1 );
        j = j + 1;
    }
    cout << endl;
    i = i +1;    
   }

   new pattern 
   int n; 
   cin >> n;
   int i = 1;
   int l = 0;
   while (i <= n)
   {
    int j = 1;
    while (j <= n)
    {
        cout << (char) ('A' +l);
        l++;
        j++;
    }
    cout << endl;
    i = i +1;
   }
    
    new pattern 
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j = 1;
    while (j <= n)
    {
        cout << (char) ('A' + i +j -2);
        j = j +1;

    }
    i = i +1;
    cout<< endl;
   }
   int n;
   cin >> n;
   int i = 1; 
   while (i <= n)
   {
    int j = 1;
    while (j <= i)
    {
        cout << (char)('A' + i -1);
        j = j +1;

    }
    cout << endl;
    i = i +1;
   }

   int n;
   cin >> n;
   int i = 1;
   int l =0;
   while (i <= n)
   {
    int j =1;
    while (j <= i)
    {
        cout<< (char) ('A' +l);
        l = l+1;
        j = j +1;

    }
    cout << endl; 
    i = i +1; 
   }
    
    
   int n;
   cin >> n;
   int i =1;
   while (i <=n)
   {
    int j =1;
    while (j <= i)
    {
        cout << (char) ('A' + i + j -2);
        j = j+1;
    }
    cout << endl;
    i = i +1; 
   }
   int n;
   cin >> n;
   int i = 1;
   while (i <=n)
   {
    int j = 1;
    while (j <= i)
    {
        cout << (char) ('A' + n - i +j -1);
        j = j +1;
    }
    i = i +1;  
    cout<< endl;  
   }
   int n;
   cin >> n;
   int i = 1;
   char start = 'A';
   while (i <= n )
   {
    int j = 1;
    while (j <= n)
    {
        cout << (char) (start + j -1);
        
        j = j +1;
    }
    start = start +1;
    i = i +1;
    cout<< endl;
    
   }

   int n;;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int space = n -i;
    int j = 1;
    while (space)
    {
        cout<< " ";
        space = space -1;
    }
    while (j <= i)
    {
        cout << "*";
        j = j+1;
    }
    i = i +1;
    cout << endl;

    
   }
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j =1;
    while (j <= (n-i +1))
    {
        cout << "*";
        j = j +1;
    }
    cout << endl;
    i = i +1;

    
   }
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j = 1;
    int space = i -1;
    while (space)
    {
        cout<< " ";
        space = space -1;
    }
    while (j <= n -i +1)
    {
        cout << "*";
        j = j+ 1;

    }
    cout << endl;
    i = i +1;    
   }
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)      
   {
    int j = 1;
    int space = i -1;
    while (space)
    {
        cout<< " ";
        space = space -1;
    }
    while (j <= n - i +1)
    {
        cout<< i;
        j = j +1;
    }
    i = i +1;
    cout<< endl;
    
    
    
   }
   int n;
   cin >> n;
   int i =1;
   while (i <= n)
   {
    int j = 1;
    int space = n - i;
    while(space)
    {
        cout<< " ";
        space = space -1;
    }
    while (j <= i)
    {
        cout<< i;
        j = j +1;
    }
    i = i +1;
    cout <<endl;
    
   }
   int n;
   cin >> n;
   int i = 1;
   while (i <= n)
   {
    int j =1;
    int space = i -1;
    while (space)
    {
        cout << " ";
        space = space -1;
    }
    while (j <= n - i +1)
    {
        cout << i + j -1;
        j = j+1;
    }
    i = i +1;
    cout << endl;
    
   }
   int n;
   cin >> n;
   int i = 1;
   int count = 1;
   while (i <= n)
   {
    int j =1;
    int space = n-i;
    while (space)
    {
        cout<< " ";
        space = space -1;
    }
    while (j <= i)
    {
        cout << count;
        count = count +1;
        j = j +1;
    }
    i = i +1;
    cout<< endl;
    
   }
int n; 
cin >> n;
int i = 1;
while (i <= n)
{
    int j = 1;
    int k =1;
    int space = n - i;
    while(space)
    {
        cout << " ";
        space = space -1;
    }
    while (j <= i)
    {
        cout << j;
        j = j +1;
    }
    j = j -1;
    
    while (k < i)
    {
        j = j-1;
        cout<< j;
        k = k +1;
    }
    
    cout << endl;
    i = i +1;
    
}
*/
int n;
cin >>n;
int i = 1;
while (i <= n)
{
    int j = 1;
    while (j <= n-i+1)
    {
        cout<<j;
        j = j +1;
    }
    j = 1;
    while (j <= 2*(i-1))
    {
        cout << "*";
        j = j +1;
    }
    j = 1;
    while (j <= n-i +1)
    {
        cout << n -j -i +2;
        j = j +1;
    }
    
    



    i = i +1;
    cout << endl;
    
}
    return 0;
}