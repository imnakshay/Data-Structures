#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d = {2,3,4};
    d.insert(d.begin()+2,00);

    for(auto i : d){
        cout<< i<<" ";
    }
}