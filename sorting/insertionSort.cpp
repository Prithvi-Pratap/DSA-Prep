#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<n;i++){
        int start=i;
        while(start){
            if(arr[start]==arr[0])
            break;
            else if(arr[start]<arr[start-1]){
            swap(arr[start],arr[start-1]);
            start=start-1;
            }
            else break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}