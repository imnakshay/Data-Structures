#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    for(int i = 1;i<=10;i++){
        s.insert(i);
    }
    for(auto i : s){
        cout<<i<<" ";
    }
}