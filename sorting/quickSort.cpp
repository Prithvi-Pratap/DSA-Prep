#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int low,int high){
    int i=low-1; //lomuto scheme for partitioning
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);// swap with the  pivot so that the pivot will get to its sorted position
    return (i+1);
}

void quickSort(vector<int>& arr,int low, int high){
    if(low<high){
        int pi=partition(arr,low,high);

        //for the left half
        quickSort(arr,low,pi-1);

        //for the right half
        quickSort(arr,pi+1,high);

    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}