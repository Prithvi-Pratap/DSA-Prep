// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int> *arr,int low, int mid , int high){
//     vector<int> temp;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid && right<=high){
//         if(arr[left]<=arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//         while(left<mid){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         while(right<high){
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }

// void mergeSort(vector<int> arr,int low , int high){
//     if(low>=high) return;
//     int mid=(low+high)/2;

//     //for the left half
//     mergeSort(arr,low,mid);
//     //for the right half
//     mergeSort(arr,mid+1,high);

//     //to merge the elements
//     merge(arr,low,mid,high);
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low, int mid , int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
        while(left<mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<high){
            temp.push_back(arr[right]);
            right++;
        }
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low , int high){
    if(low>=high) return;
    int mid=(low+high)/2;

    //for the left half
    mergeSort(arr,low,mid);
    //for the right half
    mergeSort(arr,mid+1,high);

    //to merge the elements
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
