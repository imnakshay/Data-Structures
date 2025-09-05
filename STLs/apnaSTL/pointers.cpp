#include<bits/stdc++.h>
using namespace std;

int main(){
     int age = 10;
     int* agePtr = &age;
     int** agePtrPtr = &agePtr;

     cout<<"address of age is : "<< &age<<endl;
     cout<<"address of age is : "<< agePtr<<endl;


     //we can access the values in same manner like 
     cout<< "the value at age is "<< *agePtr<<endl;
     cout<< "the value at age is "<< *&age<<endl;
}