#include<bits/stdc++.h>
using namespace std;

//this function is designed to return the highest common factor with the use eucladian algorithm;
int gcd(int a,int b){
    int max,min;
    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    if(min == 0) return max;
    return gcd(max-min,min);
    
}

//this function is designed to return the lcm after finding the hcf with the formula lcm = ab/hcf;
int lcm(int gcd,int pro){
    return (pro/gcd);
}
int main(){
    int num1,num2;
    cout<<"Enter number 1 and number2: ";
    cin>>num1;
    cin>>num2;

    int hcf = gcd(num1,num2);
    int l = lcm(hcf,num1*num2);
    cout<<"The lcm and hcf are respectively: "<<l<<" "<<hcf;
}