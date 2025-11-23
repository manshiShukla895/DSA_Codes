#include <bits/stdc++.h>

using namespace std;

int power(int a,int x ){
    int res =1;
    while (x>0)         
    {
        if(x%2 == 1)
        {
            res *= a;
        }
        a= a*a;
        x=x/2;
    }
    return res;
}
int main(){
    int a ,x;
    cin>>a>>x;

    cout<< power(a,x);

     return 0;
}