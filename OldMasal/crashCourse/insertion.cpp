#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int pos = 2;
    int num = 22;
    int l = sizeof(arr)/4;

    for (int i = l; i>pos;i--){
        arr[i]=arr[i-1];

    }
    l++;
    arr[pos]=num;
    //printing the new array;
    for(int i = 0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}