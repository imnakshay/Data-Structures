#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple<string,int,float > t;
    t = make_tuple("akshay",21,98.9);
    cout<<"The tuple we stored the value is : "<<get<0>(t)<<get<1>(t)<<get<2>(t);

}