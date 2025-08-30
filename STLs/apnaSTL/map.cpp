#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Akshay";
    m[2] = "Vikas";
    m[3] = "Suneel";

    //accessging the values;
    for(auto it = m.begin();it!=m.end();it++){
        cout << it->first<< "-> "<<(*it).second;
    }
}