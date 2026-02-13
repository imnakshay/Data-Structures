#include<bits/stdc++.h>
using namespace std;

int bottom(stack<int> & s){
    int x  = s.top();
    s.pop();
    if(s.empty()){
        return x;
    }
    int res = bottom(s);
    s.push(x);
    return res;

}

void reverseStack(stack<int>& s){
    if(s.empty()) return;
    int x = bottom(s);
    reverseStack(s);
    s.push(x);
}

int main(){
    stack<int> s;
    for(int i = 1; i <5; i++){
        s.push(5-i);
    }
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}