#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> v = {1,2,3,4};
   v.insert(v.begin()+2,0);
   for(auto x = v.begin();x!=v.end();x++) cout<< *x<<' ';
}