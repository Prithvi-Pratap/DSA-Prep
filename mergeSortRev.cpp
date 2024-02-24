#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr,int low,int mid,int high){
    int left=low,right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else if(arr[left]>=arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
    }
    //if any element remaining in the left subarray
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    //if any element remaining it the right subarray
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int>& arr, int low ,int high){
    if(low==high) return;

    int mid=(low+high)/2;

    //left half
    mergeSort(arr,low,mid);

    //right half
    mergeSort(arr,mid+1,high);

    merge(arr,low,mid,high);
}


int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    mergeSort(arr,0,n-1);
    for(auto& it:arr){
        cout<<it<<" ";
    }

    return 0;
}