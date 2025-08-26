//shell sort is a upgraded and more utilized way of using insertion sort in which we use the gaps to
// forward the smallest number to their nearest positions
#include<iostream>
using namespace std;

int shellSort(int arr[], int n)
{
    int gap = n/2;
    while(gap>=1){
        for(int i = gap;i<n;i++){
            int temp = arr[i];
            int j = i;
            while(arr[j-gap]>temp && j>=gap){
                arr[j]=arr[j-gap];
                j = j-gap;
            }
            arr[j]= temp;
        }
        gap=gap/2;
    }
}
int print(int arr[],int  n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12,5,5,2,6,62,2,6,2,4};
    int n =10;
    shellSort(arr,n);
    print(arr,n);
    
}