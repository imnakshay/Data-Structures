#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number a natural no. : ";
    cin >> n;
    bool isPrime = true;

    if (n <= 1)
    {
        cout << endl
             << "Please do not enter number less than 2.";
    }
    if (n == 2)
    {
        cout << endl
             << "It is smallest prime Number";
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "The number is Prime";
    }
    else
    {
        cout << "The number is not Prime.";
    }
}