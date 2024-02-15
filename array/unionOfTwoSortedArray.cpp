#include <bits/stdc++.h>
using namespace std;

vector <int> unionFunc(vector<int> arr1, vector<int> arr2,int n, int m)
{
    set <int> s;
    vector <int> Union;
    for (auto elem : arr1)
    {
        s.insert(elem);
    }
    for (auto elem : arr2)
    {
        s.insert(elem);
    }
    for (auto elem : s)
    {
        Union.push_back(elem);
    }
    return Union;
//     set < int > s;
//   vector < int > Union;
//   for (int i = 0; i < n; i++)
//     s.insert(arr1[i]);
//   for (int i = 0; i < m; i++)
//     s.insert(arr2[i]);
//   for (auto & it: s)
//     Union.push_back(it);
//   return Union;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    for (int i = 0; i < m; i++)
    {
        int element;
        cin >> element;
        arr2.push_back(element);
    }
    result=unionFunc(arr1,arr2,n,m);
    for(auto it: result){
        cout<<it<<" ";
    }

    return 0;
}