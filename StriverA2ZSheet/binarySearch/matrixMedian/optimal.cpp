#include<bits/stdc++.h>
using namespace std;

int smallerElements(vector<vector<int>> & mat,int element){
    int m = mat.size();
    int n = mat[0].size();
    int count = 0;
    for(auto x: mat){
        int left = 0, right = n-1;
        while(left<=right){
            int mid  = left+(right-left)/2;
            if(x[mid]>element) right = mid - 1;
            else left = mid + 1;
        }
        count+= left;
        if(count > m*n/2) return count;
    }
    return count;
}

int median(vector<vector<int>> & mat){
    int m = mat.size();
    int n = mat[0].size();
    int middle = m*n / 2;
    
    //as the m*n is odd then m should odd as well as the n should also be odd;
    if(m % 2 == 0 || n % 2 == 0 || m==0 || n==0) return -1;
    //first step to find the search space by using the smallest and largest element in the matrix
    int mini = INT_MAX, maxi =  INT_MIN;
    for(auto x : mat){
        maxi = max(maxi , x[n-1]);
        mini = min(mini,x[0]);
    }

    int left =  mini, right = maxi;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(smallerElements(mat,mid) > middle) right = mid -1;
        else left = mid + 1;
    }
    return left;
}

int main(){
    vector<vector<int>> mat = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    cout<<median(mat);
}