#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3};
    for(int i : v){
        cout<<i<<" ";
    }
    
    cout<<endl;

    v.push_back(44);
    v.push_back(42);
    v.push_back(7);
    for(int i : v){
        cout<<i<<" ";

    }
    cout<<endl;
    v.pop_back();
    cout << v.back()<<" ";
    cout<<v.at(2)<<" ";
    v[2] = 7;
    cout<<v[2]<<" ";
    v[6] = 77;
    cout<<endl;
    for(int i : v){
        cout<< i <<" ";
    }

    cout<< endl<<v[5];
    cout<<" "<< v.back();

}