#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Please Enter n: ";
    cin>>n;
    i=j=1;
    while(i<=n){
        int k=1;
        while(k<=n){
            cout<<j<<" ";
            j++;
            k++;

        }
        i++;
        cout<<"\n";
    }
}