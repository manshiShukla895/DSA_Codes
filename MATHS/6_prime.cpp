#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
    {
         
    if (n % i == 0 ) 
    
    cout<<"no"; 

    return 0;
    }
   cout<<"yes";
   return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    isPrime(n);

    // if (isPrime(n))
    //     cout << n << " is a prime number.";
    // else
    //     cout << n << " is not a prime number.";

    return 0;
}



