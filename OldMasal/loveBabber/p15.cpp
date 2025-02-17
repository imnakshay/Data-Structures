#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    i = 1;
    char  ch = 'A'+n-1;
    while(i<=n){
        j=1;
        while(j<=i){
            char out= ch-i+j;
            cout<<out<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }    
}