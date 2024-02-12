#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(arr[n - i], arr[i]);
    }
}

int checkSorted(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
bool check(vector<int> &arr)
{
    int n = arr.size();
    int length = n;
    int sorted = 0;
    while (length)
    {
        if (checkSorted(arr, n))
        {
            return true;
        }
        else{
        rotate(arr, n);
        }
        length--;
    }
    return false;
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
    cout << check(arr);

    return 0;
}