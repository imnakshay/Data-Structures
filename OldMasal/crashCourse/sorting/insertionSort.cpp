#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {5, 3, 3, 6, 2, 3, 4, 62, 6, 2};
    int n = 10;
    insertionSort(arr, n);
    print(arr, n);
}