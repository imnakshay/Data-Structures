#include<bits/stdc++.h>
using namespace std;

void zeroMatrix(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size();
    int c = 1;

    //setting zero to every indicating row and col..
    for(int i = 0 ;i<row;i++){
        for(int j = 0; j<col; j ++){
            if(arr[i][j] == 0){
                arr[i][0] = 0 ; //row set to zero;
                if(j == 0) c = 0;
                else arr[0][j] = 0;
            }
        }
    }

    // setting zeroes to every element of row and col;
    for(int i = 1; i<row;i++){
        for(int j = 1; j<col;j++){
            if(arr[i][0]==0 || arr[0][j]==0) arr[i][j]=0;
        }
    }

    //setting the representing rows and col to zeroes
    if(c==0){
        for(int i =0 ; i<row;i++){
            arr[i][0]=0;
        }
    }
    if(arr[0][0] == 0) {
        for(int i = 0; i<col;i++){
            arr[0][i]=0;
        }
    }
}

int main(){
    vector<vector<int>> arr = {{1, 1, 1,1},
                               {1, 0, 1,1},
                               {1, 1, 1,1}};
    zeroMatrix(arr);
    for(auto i : arr){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}