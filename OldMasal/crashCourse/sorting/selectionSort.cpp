#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i]=temp;

    }
}
int print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10] = {4, 32, 5, 3, 4, 524, 62, 6, 3, 6};
    int n = 10;
    selectionSort(arr, n);
    print(arr,n);
}