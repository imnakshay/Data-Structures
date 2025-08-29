#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2,3,3,4,5,77};
    // declaring a vector;
    vector<int>::iterator it;
    for(it = v.begin();it!=v.end();it++){
        cout<< *it<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.begin()+2);
    for(it = v.begin();it!=v.end();it++){
        cout<< *it<<" ";
    }
    cout<<endl;
    cout<<v.capacity() ;
    
}