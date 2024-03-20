
//it is assumed that,
//there is no duplicates in the array
//array is sorted in ascending order

#include <bits/stdc++.h>

using namespace std;


//iterative function
// int binarySearch(vector<int> &arr, int target)
// {
//     int low = 0;
//     int high = arr.size() - 1;
//     int mid = 0;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] == target)
//             return mid;

//         else if (target < arr[mid])
//             high = mid - 1;

//         else if (target > arr[mid])
//             low = mid + 1;
//     }
//     return -1;
// }

//recursive function
int recursiveBinarySearch(vector<int>& arr,int low,int high,int target){
    int index=-1;
    if(low>high)return index;
    int mid=low +(high-low)/2;
    if(target==arr[mid])
    return mid;
    else if(target < arr[mid])
    index=recursiveBinarySearch(arr,low,mid-1,target);
    else if(target>arr[mid])
    index=recursiveBinarySearch(arr,mid+1,high,target);
    return index;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }
    int target;
    cin >> target;

    // cout << binarySearch(v, target)<<endl;
    cout << recursiveBinarySearch(v,0,n-1,target);
}