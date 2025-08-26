#include <iostream>
using namespace std;

int linearSearch(int arr[], int len, int num)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 5, 6, 7, 3, 333,333};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 333;
    int status = linearSearch(arr, len, num);
    if (status != -1)
    {
        cout<<"The number is found at "<<status;
    }
    else{
        cout<<"The number is not found.";
    }
}