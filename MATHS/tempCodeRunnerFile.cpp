#include <bits/stdc++.h>

using namespace std;

void logic();

int main()
{
    int recSol(int n);
    return 0;
}

void logic()
{
    int n;
    int res = recSol(n);

    cin >> n;

   
    cout << res;
}
int recSol(int n)
{
    if (n == 1)
    {
        return n;
    }
    return recSol(n - 1) * n;
}