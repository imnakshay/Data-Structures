#include <bits/stdc++.h>
using namespace std;

// bool customComparator(int a, int b){
//     if(a<b) return 0;
//     else return 1;
// }
// int main(){
//     vector<int> v = { 1,5,3,4,2};
//     sort(v.begin(),v.end(),customComparator);
//     for (auto it : v) cout<< it<<" ";

// }

// custom comparator for the pairs
bool secondSort(pair<int,int> p1,pair<int,int> p2){
    if(p1.second > p2.second) return false;
    else return true;
}
// we need to sort the vector using second value of the pair;
int main()
{
    vector<pair<int, int>> v = {{2, 3}, {5, 4}, {2, 5}, {10, 5}, {4, 2}};

    sort(v.begin(), v.end(), greater<pair<int,int>>());
    for(auto it : v){
        cout << it.first <<" "<<it.second<<endl;
    }
}