#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,vector<int>> m;
    string s = "abcdefaabb";
    for(int i =  0; i<s.size();i++){
        char ch = s[i];
        m[ch].push_back(i);
    }
    for(auto x : m['a']){
        cout<<x<<" ";
    }
}