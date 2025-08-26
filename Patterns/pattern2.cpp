#include<iostream>
using namespace std;

int pattern(int n){
    int i = 1;
    while(i<=n){
        int j = 0;;
        while(j<i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;

    }
}

int main(){
    pattern(5);
}