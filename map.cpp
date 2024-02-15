//map stores the values in a sorted format, non-decreasing order.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre-calculation ,updating the map
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //fetching
    int queries;
    cin>>queries;
    while(queries--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }

    return 0;
}