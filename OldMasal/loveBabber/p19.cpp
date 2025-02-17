#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        //printing the spaces here of the first triangle..
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        j=1;
        while(j<i){
            cout<<i-j;
            j++;
        }
        cout<<endl;
        i++;
    }
}