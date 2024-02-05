#include <bits/stdc++.h>
using namespace std;

// vector<int> getSecondOrderElements(int n, vector<int> arr)
vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    // Write your code here.
    int largest = arr[0];
    int sLargest = INT_MIN;
    int smallest = arr[0];
    int sSmallest=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sSmallest){
            sSmallest = arr[i];
        }
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<sSmallest){

        }
    }
    return {sLargest,sSmallest};
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    arr2=getSecondOrderElements(n, arr);
    cout << arr2[0] << " " << arr2[1];

    return 0;
}