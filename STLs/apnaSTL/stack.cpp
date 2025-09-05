#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<int, vector<int>> s({1,2,3,5}),s2({1});
    cout<<"S is empty: "<<s.empty()<<"top "<<s.top()<<endl;;
    cout<<"S2 is empty: "<<s2.empty()<<"top "<<s2.top()<<endl;;
    s2.swap(s);
    cout<<"S is empty: "<<s.empty()<<"top "<<s.top()<<endl;;
    cout<<"S2 is empty: "<<s2.empty()<<"top "<<s2.top()<<endl;;

    


}