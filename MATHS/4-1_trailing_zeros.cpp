#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {
    int res = 0;
   for (int i = 5; n/i >=1; i=i*5)
   {
    res +=n/i;
   }
   return res;
}

int main() {
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}
