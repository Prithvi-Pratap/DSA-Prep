#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr,int target){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(((arr[i]+arr[j])==target) && (i!=j))
            return {i,j};
            
        }
    }
    return {-1,-1};
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> result;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int target;
    cin>>target;

    result=twoSum(arr,target);
    for(auto elem:result){
        cout<<elem<<" ";
    }

    return 0;
}