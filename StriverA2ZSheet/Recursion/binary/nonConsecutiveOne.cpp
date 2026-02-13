#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
string temp;

void generateBinary(int n,int index = 0){
    if( index >= n){
        ans.push_back(temp);
        return ;
    }
    temp.push_back('0');
    generateBinary(n,index+1);
    temp.pop_back();

    if( temp.empty() || temp[temp.size()-1] != '1'){
        temp.push_back('1');
        generateBinary(n,index+1);
        temp.pop_back();
    }
}

int main(){
    generateBinary(3);
    for(auto x:ans){
        cout<<x<<endl;
    }
}