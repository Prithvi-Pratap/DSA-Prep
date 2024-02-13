#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr,int n,int key){
    
}

int main(){
    int n, key;
    cin>>n;
    vector<int> arr;
    for(int i =0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cin>>key;
    cout<<linearSearch(arr,n,key);
    return 0;
}