#include<bits/stdc++.h>

using namespace std;

int main(){
    // int target;
    // cin>>target;
    vector<int>arr={10,20,30,40,50};
    auto Lb=lower_bound(arr.begin(), arr.end(),35);
    auto Ub=upper_bound(arr.begin(), arr.end(),35);
    int index1=distance(arr.begin(),Lb);
    int index2=distance(arr.begin(),Ub);
    cout<<index1<<" "<<index2<<endl;
}