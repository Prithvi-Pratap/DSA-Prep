#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int low ,int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quickSort(vector<int>& arr, int low ,int high){
    if(low<high){
    int pi=partition(arr,low,high); //always call this partition function inside the if statement
        quickSort(arr,low,pi-1);
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