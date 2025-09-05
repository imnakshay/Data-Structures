#include<bits/stdc++.h>
using namespace std;

int digitCounts(int &num){
    int count=0;

    //condition if the number is positive.
    if(num>=0){

        while(num>0){
            count++;
            num = num/10;
        }
        return count;
    }
    //this is the condition for the negative numbers.
    else{
        while(num<0){
            count++;
            num = num/10;
        }
        return count;
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The digits in number is: "<< digitCounts(num);


}