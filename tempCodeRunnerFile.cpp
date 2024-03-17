// #include<bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(vector<int>arr,int target){
//     map<int,int> mpp;
//     for(int i=0;i<arr.size();i++){
//         int currentElem=arr[i];
//         int required=target-currentElem;
//         if(mpp.find(required)!=mpp.end()) // this statement checks if the required elem is present in the map or not , if the 'required' will be present then it will not point to the one past to the last pair of elem
//         return {mpp[required],i};
//         mpp[currentElem]=i;
//     }
//     return {-1,-1};
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     vector<int> result;
//     for(int i=0;i<n;i++){
//         int elem;
//         cin>> elem;
//         arr.push_back(elem);
//     }
//     int target;
//     cin>>target;
//     result=twoSum(arr,target);

//     for(auto& it:result){
//         cout<<it<<" ";
//     }

//     return 0;
// }



#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    // Sample array
    vector<int> myArray = {10, 20, 30, 40, 50};

    // Create a map to store index and element pairs
    map<int, int> indexMap;

    // Iterate through the array and store elements along with their indices in the map
    for (int i = 0; i < myArray.size(); ++i) {
        indexMap[i] = myArray[i];
    }

    // Print the resulting map
    cout << "Index Map:\n";
    for (const auto& pair : indexMap) {
        cout << "Index: " << pair.first << ", Element: " << pair.second << "\n";
    }

    return 0;
}
