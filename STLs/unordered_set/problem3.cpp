#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set <int > s;
    for(int i = 1;i<=5;i++){
        s.insert(i*5);
    }
    //checking whether 10,50 exists or not...
    s.count(10)?cout<<"10 exists"<<endl:cout<<"10 not exists"<<endl;
    s.count(50)?cout<<"50 exists"<<endl:cout<<"50 not exists"<<endl;
    //finding the number 15 ;
    auto it = s.find(15);
    if(it!=s.end()) cout<<"Number 15 is present"<<endl;
    else cout<<"Number 15 is not present"<<endl;
}