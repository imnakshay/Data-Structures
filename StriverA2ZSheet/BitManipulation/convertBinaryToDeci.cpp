#include<bits/stdc++.h>
using namespace std;

int toDecimal(string binary,int index){
    if(index == 0){
        int currDigit = binary[index]-'0';
        return currDigit;
    }
    int currDigit = binary[binary.size() - index - 1]-'0';
    return  ((1<<index) * currDigit) + toDecimal(binary,index-1);
}

int main(){
    string binary = "1012";
    cout<<toDecimal(binary,binary.size()-1);
}