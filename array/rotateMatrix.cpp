#include<bits/stdc++.h>
using namespace std;

void rotateVector(vector<vector<int>>& arr){
    int n=arr.size();
    vector<vector<int>> temp(n,vector<int>(n,0));
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            temp[j][n-1-i]=arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        arr[i][j]=temp[i][j];
    }
}

int main(){
    int row;
    cin>>row;
    vector<vector<int>> arr(row,vector<int>(row,0));
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cin>>arr[i][j];
        }
    }
    rotateVector(arr);
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}