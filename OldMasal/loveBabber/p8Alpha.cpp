#include <iostream>
using namespace std;

int main()
{
    int j, n;
    char i;
    cout << "Enter a number: ";
    cin >> n;
    i = 'A';
    while (i <= n+'A')
    {
        j = 1;
        while (j <= n )
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}