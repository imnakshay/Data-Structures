#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter  a number: ";
    cin>>n;

    i = 1;
    while(i<=n){
        j=1;
        while(j<=i){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}