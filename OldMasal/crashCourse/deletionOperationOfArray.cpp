#include<iostream>
using namespace std;

int main(){
    int arr[6]= {1,2,3,4,5};
    int pos = 2;
    int len = sizeof(arr)/sizeof(arr[0])-1;

    for (int i = pos;i<len-1;i++){
        arr[i]=arr[i+1];
    }
    len--;
    for (int i = 0;i<len;i++){
        cout<<arr[i];
    }
}