#include<bits/stdc++.h>
using namespace std;


int main(){
    pair<int,int> arr[] = {{2,3}};
    cout << &arr[0] << "\n";          // address of first pair
cout << &arr[0].first << "\n";    // address of first int
cout << &arr[0].second << "\n";   // address of second int

}