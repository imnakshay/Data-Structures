#include<bits/stdc++.h>
using namespace std;

int hashTableF(int ar[],int n,int size,int hashTable[]){
    for(int i = 0 ; i<size;i++){
        hashTable[ar[i]]++;
    }
    return hashTable[n];
    
}

int main(){
    int arr [] = {3,5,3,5,6,5,4,4,5,7,7,7,6,5,4,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);                  //17
    int max = *max_element(arr,arr+(size));               //7
    int hashTable [max+1] = {0};
    int n;

    cout<<"frequency of number we want to find. ";
    cin>> n;
    cout<<hashTableF(arr,n,size,hashTable)<< ' ';

}