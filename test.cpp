#include <bits/stdc++.h>
using namespace std;



int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int max=0;
    for(int i=0;i<9;i++){
        if(arr[i]>max){
            cout<<<<endl;
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}