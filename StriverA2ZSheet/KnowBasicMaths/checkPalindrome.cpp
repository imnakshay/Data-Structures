#include <bits/stdc++.h>
using namespace std;

bool palindrome(int num)
{
    if (num < 0)
    {
        cout << "The number is not valid or negative number.";
        return 0;
    }
    int temp = num;
    int rev, lastDigit;
    rev = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    if (rev == temp)
        return true;
    return false;
}

int main()
{
    int num;
    cout << " Enter a number : ";
    cin >> num;
    if (palindrome(num) == 1)
        cout << "The number is palindrome.";
    else
        cout << "The number is not palindrome.";
}