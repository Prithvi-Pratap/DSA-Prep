//brute force: linear search approach, time complexity O(n+m) ,space complexity O(1)

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(vector<int> arr,int target){
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr.size();j++){
//             if(((arr[i]+arr[j])==target) && (i!=j))
//             return {i,j}; 
            
//         }
//     }
//     return {-1,-1};
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     vector<int> result;
//     for(int i=0;i<n;i++){
//         int element;
//         cin>>element;
//         arr.push_back(element);
//     }
//     int target;
//     cin>>target;

//     result=twoSum(arr,target);
//     for(auto elem:result){
//         cout<<elem<<" ";
//     }

//     return 0;
// }


// optimal approach: using hash map, time complexity: o(n x logn) linear time
//logic:
// 1. iterate over the arr
// 2. take the first element and find out the required no. to hit the target
// 3. now check the map if the target is present in the map or not
// 4. if not , then insert the pair of current elem, and its index in the map
// 5. continue the process.
// 6. when the required no. will be present in the map , return the indexes


#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>arr,int target){
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        int currentElem=arr[i];
        int required=target-currentElem;
        if(mpp.find(required)!=mpp.end()) // this statement checks if the required elem is present in the map or not , if the 'required' will be present then it will not point to the one past to the last pair of elem
        return {mpp[required],i};
        mpp[currentElem]=i;
    }
    return {-1,-1};
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> result;
    for(int i=0;i<n;i++){
        int elem;
        cin>> elem;
        arr.push_back(elem);
    }
    int target;
    cin>>target;
    result=twoSum(arr,target);

    for(auto& it:result){
        cout<<it<<" ";
    }

    return 0;
}