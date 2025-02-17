#include <iostream>
using namespace std;

int searching(int arr[], int len, int n)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 23, 4, 6, 3};
    int num = 4;
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "The position is: " << searching(arr, len, num);
}