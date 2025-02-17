#include<iostream>
using namespace std;
int main(){
    int i,j,count,n;
    cout<<"Enter a number: ";
    cin>>n;
    i=count=1;

    while(i<=n){
        j=1;
        while(j<=i){
            cout<<count<< ' ';
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}