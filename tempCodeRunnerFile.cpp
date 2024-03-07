#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>arr,int target){
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        int currentElem=arr[i];
        int required=target-currentElem;
        if(mpp.find(required)!=mpp.end()) // this statement checks if the required elem is present in the map or not , if the 'required' will be present then it will not point to the one past to the last pair of elem
        return {mpp[required],i};
        mpp[currentElem]=i;
    }
    return {-1,-1};
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> result;
    for(int i=0;i<n;i++){
        int elem;
        cin>> elem;
        arr.push_back(elem);
    }
    int target;
    cin>>target;
    result=twoSum(arr,target);

    for(auto& it:result){
        cout<<it<<" ";
    }

    return 0;
}