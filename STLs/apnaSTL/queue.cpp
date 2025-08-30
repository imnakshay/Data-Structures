#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(5);
    cout<<"Front is : "<< q.front()<<endl;
    q.pop();
    cout<<"Front is : "<< q.front();

}