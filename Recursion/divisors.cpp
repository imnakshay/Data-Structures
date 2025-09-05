#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int num){
    vector<int> v;
    for(int i = 2 ; i <=num/2 ; i++){
        if(num % i == 0) v.push_back(i);
    }
    return v;
}

int main(){
    int num ;
    cout<< "Enter a number: ";
    cin >> num;
    cout<<"The divisors are:  ";
    for (auto x : divisors(num)) cout<< x << ' ';
}