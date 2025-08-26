#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    i = 1;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        while(j<=n){
            cout<<"*";
            j++;
        }
        j=1;
        while(j<i){
            cout<<"*";
            j++;
        }
        j=1;
        while(j<=n-i+1){
            cout<<n-i-j+2;
            j++;
        }
        cout<<endl;
        i++;
    }
}