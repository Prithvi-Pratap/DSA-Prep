// #include<bits/stdc++.h>
// using namespace std;

// int findNCR(int n){
//     long long result=1;
//     for(int i=1;i<=n;i++){
//         cout<<result<<" ";
//         result*=n-i;
//         result/=i;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     findNCR(n);
//     return 0;
// }

#include<bits/stdc++.h>


using namespace std;

int findNCR(int n,int r){
    int result=1;
    for(int i=1;i<r;i++){
        result*=n-i;
        result/=i;
    }
    return result;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<findNCR(n,r);
}