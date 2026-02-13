#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i = 0){
    if(i >= s.size()/2) return true;
    if(s[i]!=s[s.size()-1-i]) return false;
    return isPalindrome(s,i+1);
}

int main(){
    string s = "ramma4";
    cout<< (isPalindrome(s) ? "It is a Palindrome" : "It is not a Palindrome.");
}