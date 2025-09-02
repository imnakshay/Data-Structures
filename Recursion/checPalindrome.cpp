#include <bits/stdc++.h>
using namespace std;

string revString(string &s)
{
    string revString;
    for (int i = 0; i < (int)s.size(); i++)
    {
        revString.push_back(s[s.size() - i - 1]);
    }
    return revString;
}

bool checkPalindrome(string &s)
{
    if (s == revString(s))
        return 1;
    return 0;
}
void printAnswer(string &s)
{
    if (checkPalindrome(s) == 1)
        cout << "The string is Palindrome.";
    else
        cout << "The string is not Palindrome.";
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    printAnswer(str);
}