#include <bits/stdc++.h>
using namespace std;

void rmduplicate(vector<int> &arr)
{
    int i = 0;   //latePointer
    for(int j = 1;j<arr.size();j++){
        if(arr[i]!= arr[j]) i++;
        arr[i] = arr[j];
    }
    arr.erase(arr.begin()+i+1,arr.end());

}

int main()
{
    vector<int> arr = {1, 1,2,2,3,3,4,4,5,6};
    rmduplicate(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}