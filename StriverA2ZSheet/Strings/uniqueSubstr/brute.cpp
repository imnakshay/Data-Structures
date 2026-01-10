#include<bits/stdc++.h>
using namespace std;

int noOfSubStringsWithUniqueCharactersK(string str,int k){
    int n = str.size();
    int count = 0;
    for(int i = 0 ; i<n;i++){
        unordered_set<char> s;
        for(int j = i ; j<n;j++){
            s.insert(str[j]);
            if(s.size() == k) count++;
            else if(s.size() >k) break;
        }
    }
    return count;
}

int main(){
    string str = "abcbaa";
    int k = 3;
    cout<<noOfSubStringsWithUniqueCharactersK(str,k);
   
}