//kadane's  algorithm
#include<bits/stdc++.h>
using namespace  std;

void printSubarray(vector<int>& arr,int start,int end){
    cout<<"The subarray is: ";
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//for printing the subarray uncomment the comments

int maxSubarray(vector<int> arr){
    int maximum=arr[0];
    int sum=0;

    // int start=0
    // int indexStart=-1,indexEnd=-1;

    for(int i=0;i<arr.size();i++){

        // if(sum==0)start=i;

        sum+=arr[i];
        if(sum>maximum){
            maximum=sum;

            // indexStart=start;
            // indexEnd=i;
        }
        if(sum<0)
        sum=0;
    }

    // printSubarray(arr,indexStart,indexEnd);
    
    return maximum;
}

//driver function
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