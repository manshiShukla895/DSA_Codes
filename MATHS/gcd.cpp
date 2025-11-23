#include <bits/stdc++.h>

using namespace std;

int findHCF(int a,int b){
    while (b!= 0)
    {
        int temp =b;
        b=a %b;
        a=temp;
    }
    return a;}

// int findHCF(int a, int b)
// {
//     while (a % b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return b;
// }
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int hcf = findHCF(num1, num2);

    cout << "HCF of" << num1 << "and" << num2 << "is:" << hcf << endl;

    return 0;
}