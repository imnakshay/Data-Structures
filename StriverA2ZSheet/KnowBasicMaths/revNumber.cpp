#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    if (x < pow(-2, 32) && x > (pow(2, 31) - 1))
        return 0;
    int rev = 0;
    int lastDigit;

    if (x >= 0)
    {
        while (x > 0)
        {
            lastDigit = x % 10;
            x = x / 10;
            rev = rev * 10 + lastDigit;
        }
    }
    else
    {
        while (x < 0)
        {
            lastDigit = x % 10;
            x = x / 10;
            rev = rev * 10 - lastDigit;
        }
    }
    return rev;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The reverse of number is : " << reverse(x);
}