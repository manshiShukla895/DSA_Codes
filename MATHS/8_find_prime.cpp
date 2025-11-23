#include <bits/stdc++.h>

using namespace std;

int find_prime(int n)
{
    vector<bool> v(n + 1, true);

    for (int i = 2; i < sqrt(n); i++)
    {
        if (v[i])
        {
            for (int j = 2 * i; j <= n; j =j+i)
            {
                v[j] = false;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (v[i])
            {
                cout << i <<" ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    find_prime(n);
    return 0;
}