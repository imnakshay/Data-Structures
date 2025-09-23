#include<bits/stdc++.h>
using namespace std;

 int main(){
    int row, col;
    cout<<"Enter rows and cols: ";
    cin>> row>>col;
    if(col>row){
        cout<<"Column can not greater than the row";
        exit(0);
    }

    int numerator = 1;
    int denominator = 1;
    for(int i = 0 ; i<col;i++){
        numerator*= row-i;
        denominator *= col-i;
    }
    cout<<numerator/denominator;
 }