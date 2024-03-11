//kadane's  algorithm
#include<bits/stdc++.h>
using namespace  std;

int maxSubarray(vector<int> arr){
    int maximum=arr[0];
    int sum=0;
    for(auto& it : arr){
        sum+=it;
        maximum=max(sum,maximum);
        if(sum<0)
        sum=0;
    }
    return maximum;
}

int main(){
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    cout<<maxSubarray(arr);
    return 0;    

}