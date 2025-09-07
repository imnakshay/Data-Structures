#include <bits/stdc++.h>;
using namespace std;

pair<int,int> numbers(int *arr, int size)
{
    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    return {min,max};
}

int main()
{
    int arr[] = {1, 4, 2, 6, 44, 7, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    numbers(arr, size);
}