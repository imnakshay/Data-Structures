#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter a number:  ";
    cin>>n;
    i = 1;
    char ch = 'A';
    while(i<=n){
        j = 1;
        while(j<=i){
            cout<<ch;
            if(ch=='Z'){
                ch=ch-26;
            }
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}