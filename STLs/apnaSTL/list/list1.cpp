#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> li = {1,2,3,4};
    //inserting the data at front and back of the list;
    li.push_back(5);
    li.push_front(0);   //output 0 1 2 3 4 5

    // try to push the 0 3rd position.
     auto it= li.begin();
     advance(it,2);
     li.insert(it,0);

    
    for(auto it = li.begin();it!=li.end();it++) cout<<*it<<' ';
}

