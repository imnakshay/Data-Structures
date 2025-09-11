#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int size, bool Swap = 1)
{
    if (size <= 1 || Swap == 0)
        return;
        Swap = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            Swap = 1;
        }
    }
    bubbleSort(arr, size - 1);
}

int main()
{
    vector<int> arr = {1, 2, 5, 4, 2, 3, 6, 8, 9, 7, 0};
    bubbleSort(arr, arr.size());
    for (auto i : arr)
        cout << i << " ";
}