#include<bits/stdc++.h>
using namespace std;

long int reverse(long int n){
    vector <int> digits;
    while(n>0){
        digits.push_back(n%10);
        n/=10;
    }

    //reversing start here
    long int sum = 0;
    int size = digits.size();
    for(int i = 0; i<size;i++){
        sum = sum + digits[i]*pow(10,size-1-i);
    }
    return sum;
}

int main(){
    cout<<"The reverse is : "<<reverse(87654321);
}