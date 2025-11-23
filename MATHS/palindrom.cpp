#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void logic();

bool isPalindrom(int num)
{
    if (num < 0)
        return false;

    int original = num;
    int reversed = 0;

    while (num != 0)
    {
        int digit = num % 10;

        reversed = reversed * 10 + digit;

        num /= 10;
    }
    return original == reversed;
}

int main()
{
    logic();
    return 0;
}

void logic()
{
    int num;
    cin >> num;
    int rev = 0;

    if (isPalindrom(num))
    {
        cout << num << " is palindrome" << endl;
    }
    else
    {
        cout << num << "is not a palindrom" << endl;
    }
}