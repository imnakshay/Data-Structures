#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    int a, b = 1;
    a = 0;
    int c;
    cout << a << " "
         << b << " ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}