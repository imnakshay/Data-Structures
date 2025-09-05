#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    // for(int i= 1; i<=n; i++){
    //     cout<<i<<endl;
    // }
    int i = 0;
    for(/*iterator*/;/*condition*/;/*updation*/){
        if(i<=n){
            cout<<i<<endl;
            i++;
        }else{
            break;
        }
    }
}