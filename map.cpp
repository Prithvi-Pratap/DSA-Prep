//map stores the values in a sorted format, non-decreasing order.
//it is a associative container , it stores unique key-value pairs,where each key is unique to a corresponding value


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //pre-calculation ,updating the map
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     //fetching
//     int queries;
//     cin>>queries;
//     while(queries--){
//         int num;
//         cin>>num;
//         cout<<mpp[num]<<endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre-compute
    map<int,int> myMap;
    for(int i=0;i<n;i++){
        myMap[arr[i]]++;
    }  

    //fetching
    int queries;
    cin>>queries;
    while(queries--){
        int n;
        cin>>n;
        cout<<myMap[n]<<endl;
    }
return 0;
}


















