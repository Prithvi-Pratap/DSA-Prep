//hashing: pre-storing and fetching

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int hashArr[13]= {0};
    for(int i=0;i<n;i++){
        hashArr[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hashArr[number]<<endl;
    }
        return 0;
}