#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter your character: ";
    cin >> ch;

    if ((ch >= 'a') && (ch <= 'z'))
    {
        cout << "Small Case";
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
    {
        cout << "Capital";
    }
    else if ((ch >= '0') && ch <= '9')
    {
        cout << "Digit";
    }
}