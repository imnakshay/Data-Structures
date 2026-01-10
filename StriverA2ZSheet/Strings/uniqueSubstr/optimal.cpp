#include <bits/stdc++.h>
using namespace std;

int subStrings(string str,int k ){
    int result = 0;
    unordered_map<char,int> m;
    int left = 0 ,right = 0;
    while(right < str.size()){
        m[str[right]]++;
        while(m.size() > k){
            m[str[left]]--;
            if(m[str[left]] == 0) m.erase(str[left]);
            left++;
        }
        result+=right-left+1;
        right++;
    }
    return result;
}

int noOfSubStringsWithUniqueCharactersK(string str, int k)
{
    return subStrings(str,k) - subStrings(str,k-1);
}

int main()
{
    string str = "abcbaa";
    int k = 2;
    cout << noOfSubStringsWithUniqueCharactersK(str, k);
}