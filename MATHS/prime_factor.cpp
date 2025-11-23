#include <bits/stdc++.h>

using namespace std;

int prime(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n%i == 0)
        {
            if(n%i==0) cout<< i<<" ";
            // if(n%i!=0) break;
            n=n/i;
        }
        if(n==1)break;
        
    }
    if(n!=1)cout<<n;
    
    
}
int main() {
    int n;
    cin >> n;
    prime(n);
    return 0;
}