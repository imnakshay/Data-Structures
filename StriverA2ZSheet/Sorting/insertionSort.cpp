#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    size_t size = arr.size();
    for(int i = 1 ; i<size;i++){
        int key = arr[i];
        int j = i;
        while( j > 0 && arr[j-1]>key){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}

int main()
{
    vector<int> arr = {7,3,6,5,4,0};
    insertionSort(arr);
    for (auto i : arr)
        cout << i << " ";
}