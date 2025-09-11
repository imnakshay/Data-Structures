#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    size_t size = arr.size();
    for (size_t i = 0; i < size - 1; i++)
    {
        bool isSwapped = 0;
        for (size_t j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(isSwapped==0){
            cout<<"The array is already sorted."<<endl;
            break;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 5, 4, 2, 3, 6, 8, 9, 7, 0};
    // vector<int> arr = {1, 1,2,3,4,5,6};
    bubbleSort(arr);
    for (auto i : arr)
        cout << i << " ";
}