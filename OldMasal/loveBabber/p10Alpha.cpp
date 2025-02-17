#include<iostream>
using namespace std;

int main(){
    int i , j ,n;
    cout<<"Enter a number: ";
    cin>>n;

    i = 1;
    char count = 'A';

    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<" ";
            if(count=='Z'){
                count=count-26;
            }
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}