#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of times : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j= 1;
        while(j<=n){
            cout <<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}