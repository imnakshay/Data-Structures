#include<bits/stdc++.h>
using namespace std;

int assignedStudents(vector<int> & nums,int pages){
    int students = 0;
    int sum = 0;
    for(auto x: nums){
        sum += x;
        if(sum > pages){
            students ++;
            sum = x;
        }
        else if(sum == pages){
            students++;
            sum = 0;
        }
    }
    if(sum != 0) students++;
    return students;
}

int maxMinPages(vector<int> & nums,int students){
    int n = nums.size();
    if(n < students) return -1;
    int left = *max_element(nums.begin(),nums.end());
    int right = accumulate(nums.begin(),nums.end(),0);
    while(left<=right){
        int mid = left + (right - left) /2;
        if(assignedStudents(nums,mid) > students) left = mid + 1;
        else right = mid -1 ;
    }
    return left;
}

int main(){
    vector<int> nums = {12,34,67,90};
    int students = 2;
    cout<<maxMinPages(nums,students);
}