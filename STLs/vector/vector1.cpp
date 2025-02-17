#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 0;i<10;i++){
        v.push_back(i);
    }
    //printing this vector array;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl<<"finding the first element"<<" ";
    cout<<v.front()<<endl;

    cout<<"last element: "<<v.back()<<endl;

    cout<<"the size of vector array is : "<<v.size()<<endl;

    cout<<"Popping the last element of the vector array and inserting 11 in beginning."<<endl;
    v.insert(v.begin(),11);
    cout<<"The last element popped is: "<<v[v.size()-1];
    v.pop_back();

    cout<<endl<<"The new vector is : ";
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"inserting the value at fifth pos;"<<endl;
    v.insert(v.begin()+4,55);

    cout<<"Printing the vector with the help of iterator i and indexing"<<endl;
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"The capacity of vector is : "<<v.capacity();
    v.shrink_to_fit();
    cout<<"the new capacity after the shrinking is : "<< v.capacity();

    // we want a faster alternative to the push back we use emplace bakc method for insertign and increasing the size of array vector by 1;

    v.emplace_back(1000000);
    for(auto x: v){
        cout<<x<<" ";
    }

    //for inserting the multiple values at a specific position 
    vector<int> vector = {12,4,2,3,5};
    vector.insert(vector.begin()+1,5,1);
        cout<<endl<<"The vector after inserting 5 1s at first position are: "<<endl;
    for(int x:vector){
        cout<<x<<" ";
    }


}

//the key points to be notted here are that we can use indexing for accessing the values inside the vector 
//and we can also extract the values with the help of iterator by the use of end() and begin();