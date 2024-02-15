#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>arr, int n,int k) {
    // Write your code here.
    int temp[k];
    // int n=arr.size();
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=n-k,j=0;i<n;i++,j++){
        arr[i]=temp[j];
    }
     return arr;
}

// vector<int> rotateArray(vector<int>arr,int n,int k){
//     reverse(arr.begin)
// }


int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int k;
    cin>>k;

    arr=rotateArray(arr,n,k);
    for(auto elem:arr){
        cout<<elem<<" ";
    }
    
    return 0;

}