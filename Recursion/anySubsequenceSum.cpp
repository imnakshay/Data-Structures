#include <bits/stdc++.h>
using namespace std;

bool subSequence(vector<int> arr, vector<int> &ds, int index, int sum, bool flag = false)
{
    if (index == arr.size())
    {
        int s = 0;
        for (auto x : ds)
        {
            s += x;
        }
        if (s == sum)
        {
            for (auto x : ds)
                cout << x << " ";
            flag = true;
        }
        return flag;
    }
    if (flag==false){
        ds.push_back(arr[index]);
        flag = subSequence(arr,ds,index+1,sum,flag);
        if(flag == false){
            ds.pop_back();
            flag = subSequence(arr,ds,index+1,sum,flag);
        }
        return flag;
        
    }
    return flag;
}
int main()
{
    vector<int>arr = {3,1,2,3,1};
    vector<int> ds;
    subSequence(arr,ds,0,4,false);
}