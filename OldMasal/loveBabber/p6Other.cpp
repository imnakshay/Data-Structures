#include<iostream>
using namespace std;

int main(){
    int i,n,j;
    cout<<"Enter a number: ";
    cin>>n;
    i = 1;
    while(i<=n){
        j = i;
        while(j<i+i){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}