#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> arr,int n){
    int flag=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]!=i){
                flag=1;
                return flag;
            }
        }
    }
    return flag;

}

int main(){
    int n;
    int check;
    vector<int> arr;

    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    check=missing(arr,n);
    cout<<check;

    return 0;
}