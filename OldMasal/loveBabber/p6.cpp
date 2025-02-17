#include <iostream>
using namespace std;

int main()
{
    int i, j, n, count;
    cout << "Enter a    number count: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        count = i;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}