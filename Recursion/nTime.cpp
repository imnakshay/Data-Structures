#include<bits/stdc++.h>
using namespace std;

void nTimes(int n, string name){
    if(n==0) return;
    cout<< name <<  ' ';
    return nTimes(n-1,name);
}


int main(){
    int n;
    string name;
    cout<<"Enter number and name ";
    cin >> n >> name;
    nTimes(n,name);
}