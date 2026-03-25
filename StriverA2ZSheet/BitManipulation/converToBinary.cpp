#include<bits/stdc++.h>
using namespace std;

string toBinary(int n){
    if(n/2 == 0){
        string res;
        res.push_back('0'+n%2);
        return res;
    }
    string res = toBinary(n/2);
    res.push_back('0'+n%2);
    return res;
}

int main(){
    cout<<toBinary(13);
}