// brute force approach

#include <bits/stdc++.h>
using namespace std;

//brute force approach: creating a temporary array , pushing the non zero elements into the array and then pushing the temporary array back into the original array

// void moveZeros(vector<int> &arr, int n)
// {
//     // vector<int> temp;
//     // for (auto elem : arr)
//     // {
//     //     if (elem != 0)
//     //     {
//     //         temp.push_back(elem);
//     //     }
//     // }
//     // int nz = temp.size();

//     // for (int i = 0; i <nz; i++)
//     // {
//     //     arr[i] = temp[i];
//     // }
//     // for (int i =nz; i < n; i++)
//     // {
//     //     arr[i] = 0;
//     // }
// }

//optimal approach: two pointer approach , i , j;
// i=0; i will iterate over the array if arr[i] is not zero we will swap the element with arr[j], j will point to the zeros

void moveZeros(vector<int> &arr, int n)
{
     int i=0,j=0;
    while(i<n){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        } else{
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    moveZeros(arr, n);

    for (auto elem : arr)
    {
        cout << elem << " ";
    }

    return 0;
}