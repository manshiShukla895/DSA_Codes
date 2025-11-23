// #include <bits/stdc++.h>

// using namespace std;

// void logic();

// int main(){
//  logic();
//  return 0;
// }

// void logic()
// {
// int n;
// int res=1;

// cin>>n;

// while (n>0)
// {
//     res= res*n;
//     n--;
// }
// cout<<res;

// }

//---------------- recursive----------------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;


int recSol(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return  n *recSol(n - 1);
}

void logic()
{
    int n;

    cin >> n;
    int res = recSol(n);

    cout << res;
}
int main()
{
     logic();

    return 0;
}
