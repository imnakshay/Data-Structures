#include<iostream>
using namespace std;

int main(){
    int i, j,n;
    cout<<"Enter a number: ";
    cin>>n;
    i = 1;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;


        }
        cout<<"\n";
        i++;
    }
}