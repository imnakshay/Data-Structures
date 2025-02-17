#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    i= 1; 
    char ch = 'A';

    while(i<=n){
        j=1;
        ch = 'A'+ i -1;
        while(j<=n){
            char out=ch+j-1;
            cout<<out;
            j++;


        }
        i++;
        cout<<endl;
    }
}