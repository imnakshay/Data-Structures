#include<bits/stdc++.h>
using namespace std;

bool palindromeON(string &s,int l=0){
    if(l>=s.size()-1-l) return 1;
    if(s[l]==s[s.size()-1-l]) return palindromeON(s,l+1);
    return 0;
}
int main(){
    string s = "hello";
    if(palindromeON(s)== 1) cout<<"it si a palindrome.";
    else cout<<"Not Palindrome";
}