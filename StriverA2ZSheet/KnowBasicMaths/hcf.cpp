#include<bits/stdc++.h>
using namespace std;

int hcf(int num1,int num2){
    int gcd = 1;
    for(int i = 2;i<=min(num1,num2);i++){
        if(num1%i==0 && num2%i==0) gcd = i;
    }
    return gcd;
}

int main(){
    int num,num2;
    cout<<"Enter two number: ";
    cin>>num>>num2;
    cout<<"The greatest common factor is: "<<hcf(num,num2);

}