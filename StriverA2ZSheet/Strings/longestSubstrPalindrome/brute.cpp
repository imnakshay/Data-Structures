#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(rev == str) return true;
    return false;
}

string longestValidPalindrome(string str){
    string result = "";
    int longest = 0;
    for(int i = 0 ; i < str.size(); i ++){
        for(int j = i ; j < str.size(); j++){
            int length = j-i+1;
            if(length > longest){
                if(checkPalindrome(str.substr(i,length))) {
                    result = str.substr(i,length);
                    longest = length;
                }
            }
        }
    }   

    return result;
}

int main(){
    string str = "abbd";
    cout<<longestValidPalindrome(str);
   
}