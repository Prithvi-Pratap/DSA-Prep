#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,min;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
     for(int j=i;j<n;j++){
        if(arr[j]<arr[i]){
            swap(arr[j],arr[i]);
        }
     }   
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//visualization

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,min;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//      for(int j=i;j<n;j++){
//         if(arr[j]<arr[i]){
//             swap(arr[j],arr[i]);
//             cout<<"step"<<j<<":";
//             for(int k=0;k<n;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//      }   
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return 0;
// }