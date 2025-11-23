#include <bits/stdc++.h>

using namespace std;

int func_pow(int a ,int x){
    if(x==0)return 1;
    int temp = func_pow(a,x/2);
        temp = temp*temp;

        if(x%2==0)
            return temp;
            else
            return temp*a;

}

int main(){
     int n, x;
    cin >> n >> x;

    cout << func_pow(n, x);
    return 0;


}
