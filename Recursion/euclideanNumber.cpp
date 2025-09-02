#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int mini = min(a,b);
    int maxi = max(a,b);

    if(mini == 0) return maxi;

    int subtract = maxi - mini; 
    

    return gcd(subtract, mini);

}

int main(){
    int num1;
    int num2;
    cout<<"Enter two  numbers: ";
    cin >> num1 >> num2;
    cout<<"The greatest common factor is : " <<gcd(num1,num2);
}