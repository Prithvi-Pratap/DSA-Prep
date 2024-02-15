#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(arr[n - i], arr[i]);
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
    rotate(arr,5);
    for(int elem: arr){
        cout<<elem<<" ";
    }
    return 0;
}