#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int > us;
    for(int i = 1;i<=5;i++){
        us.insert(i*10);
    }
    //check whether 30 exists or not;
    if(us.find(30)!=us.end()){
        cout<<"30 is present.";
    }else{
        cout<<"30 is not present.";
    }
    //erasing the number 30
    us.erase(20);
    //printing the remainings.
    for(auto n:us){
        cout<<n<<" ";
    }

}