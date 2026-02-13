#include<bits/stdc++.h>
using namespace std;

void printName (string name , int count){
//base case
if(count == 5){
    return ;
}
cout<<name<<" ";
count++;
printName(name,count);
}

int main(){
    string name = "Akshay";
    printName(name,0);
}