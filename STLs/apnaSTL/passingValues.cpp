#include<bits/stdc++.h>
using namespace std;

int doubleValue(int* value){
    *value *=2;
    return 0;
}

int main(){
    int num = 5;
    doubleValue(&num);
    cout<<num;

}