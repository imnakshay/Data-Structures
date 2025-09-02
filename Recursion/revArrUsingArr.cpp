#include<bits/stdc++.h>
using namespace std;
#define S 6;

void revArr(int arr[],int size,int *revArray){
    for(int i = 0 ; i<size;i++){
        revArray[i] = arr[size-i-1];
    }
    return;
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int revArray[size];
    
    revArr(arr,size,revArray);

    for(int i = 0 ; i<size;i++){
        cout<< revArray[i]<< ", ";
    }
    cout<<endl<< S;


}