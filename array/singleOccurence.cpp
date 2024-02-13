#include<bits/stdc++.h>
using namespace std;

//brute force: using linear search , and note the frequency of occurence , if the frequency of occurence of any of the element is 1 , then return the element

//optimal approach: using xor operator
int singleOccurence(vector<int>& nums){
    int Xor=0;
    for(auto elem: nums){
        Xor=Xor ^ elem;
    }
    return Xor;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    cout<<singleOccurence(nums);


    return 0;
}