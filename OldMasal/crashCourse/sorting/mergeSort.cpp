#include <iostream>
using namespace std;

int conquer(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int temp[high - low + 1];
    int pos = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[pos] = arr[left];
            left++;
            pos++;
        }
        else
        {
            temp[pos] = arr[right];
            pos++;
            right++;
        }
    }
    while (left <= mid)
    {
        temp[pos] = arr[left];
        pos++;
        left++;
    }
    while (right <= high)
    {

        temp[pos] = arr[right];
        pos++;
        right++;
    }

    for(int i = low; i<=high;i++){
        arr[i]= temp[i-low];
    }
}

int divide(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low == high)
    {
        return 0;
    }
    divide(arr, low, mid);
    divide(arr, mid + 1, high);
    conquer(arr, low, mid, high);
}

int print(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[10] = {7,6,5,4,3,1,2,0,66,55};
    divide(arr,0,9);
    print(arr,9);
}