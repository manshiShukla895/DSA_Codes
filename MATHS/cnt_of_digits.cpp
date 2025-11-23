#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void logic();

int main()
{
    logic();
    return 0;
}

void logic()
{
    int n;
    cin >> n;
    int res = 0;

    while (n > 0)
    {
        res++;
        n /= 10;
    }
    cout << res;
}