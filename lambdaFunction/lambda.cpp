#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    
    function<int> add = [x,y]{
        return x+y;
    };
    cout<<"The addition of two numbers is : ";
    cout<< add();
}