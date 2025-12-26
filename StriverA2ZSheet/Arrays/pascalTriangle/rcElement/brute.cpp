#include<bits/stdc++.h>
using namespace std;
//we are taking the first row as 0 th row;

int factorial(int n){
    if(n == 1 || n==0) return 1;
    return n*factorial(n-1);
}

int pascalElement(int row,int col){
    return factorial(row)/(factorial(col)*factorial(row-col));
}

int main(){
    int row = 4;
    int col = 3;
    cout<<"Enter the row and col : ";
    cin>>row>>col;
    cout<<pascalElement(row,col);
}