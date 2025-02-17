#include<iostream>
using namespace std;

int main(){
    int arr[10]={5,4,6,7,4,3,9,6,4,3};
    int n = 10;
    for(int i = 0 ; i < n-1; i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j-1]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}