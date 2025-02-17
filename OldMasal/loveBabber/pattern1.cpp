#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = j = 0;

    while (i < 6)
    {
        j = 0;
        while (j < 6)
        {
            cout << "*";
            j += 1;
        }
        i += 1;
        cout<<"\n";
    }
}