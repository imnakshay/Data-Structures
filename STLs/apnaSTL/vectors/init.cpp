#include<iostream>
#include<vector>
using namespace std;

int main(){
    //initialization of a vector with the declaration and values.
    vector<int> vector1 = {1,2,3,4};
    for(int i : vector1){
        cout<< i<<" ";
    }
    cout<< endl;

    //initializing the vector with the previous vector value...
    vector<int> vector2(vector1);
    for(int i : vector2){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //initializing vector with the multiple values which are repeating;
    vector<int> vector3(3,10);
    for(int i : vector3){
        cout<< i<< " ";
    }

}