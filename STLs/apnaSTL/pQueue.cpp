#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {4,63,5,2,6,7,7,8,6,4,4,4444,5};
    queue<int,vector<int>> pq(v);
    pq.pop();
    cout<<pq.front();

}
