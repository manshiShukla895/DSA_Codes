#include <bits/stdc++.h>

using namespace std;

int trailingzeroes(long long n)
{
  int res = 0;
  while (n % 10 == 0 && n != 0)
  {
    res++;
    n /= 10;
  }
  return res;
}

int main()
{

  long long n;

  cin >> n;
  cout << trailingzeroes(n);
  return 0;
}
