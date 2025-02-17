#include<bits/stdc++.h>
using namespace std;

int print(unordered_set<int> u){
    for(auto it = u.begin();it!=u.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    unordered_set<int > s = {2,35,3,56,3,2,25};
    print(s);
}