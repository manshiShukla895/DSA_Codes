#include <bits/stdc++.h>

using namespace std;

int findHCF(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a % b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}
int findLCM(int a, int b)
{
    return abs(a * b) / findHCF(a, b);
}
int main()
{
    int num1, num2;

    cout << "enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    int hcf = findHCF(num1, num2);
    int lcm = findLCM(num1, num2);

    cout << "HCF of " << num1 << "and " << num2 << "is: " << hcf << endl;
    cout << "lcm of " << num1 << "and " << num2 << "is: " << lcm << endl;

    return 0;
}