#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (max < sum)
                max = sum;
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << maxSubArray(arr);

    return 0;
}