/*
Pascal's triangle:
there are three types of possible question:
1. find  the  element  at given row and column position
2. print the nth row elements
3. print the pascal's triangle till nth row


// type  1: find the element at given row and column position
//brute force : using the nCr =  n!/ r! * (n-r)!

#include<bits/stdc++.h>
using namespace std;

int findNcR(int  n,int r){
    long  long result=1;
    for(int i=1;i<r;i++){
        result*=n-i;
        result/=i;
    }
    // result=x/y;

    return result;
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<findNcR(n,r);

    return  0;
}



//type 2:Print the elements of nth row 

#include<bits/stdc++.h>
using namespace std;

int findNCR(int n){
    long long result=1;
    for(int i=1;i<=n;i++){
        cout<<result<<" ";
        result*=n-i;
        result/=i;
    }
}

int main(){
    int n;
    cin>>n;

    findNCR(n);
    return 0;
}
*/


//type 3:print the pascal's triangle till nth row

#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int n){
    vector<int>row;
    int result=1;
    for(int i=1;i<=n;i++){
        row.push_back(result);
        result*=n-i;
        result/=i;
    }
    return row;
}

vector<vector<int>>generateTriangle(int n){
    vector<vector<int>>triangle;
    for(int i=1;i<=n;i++){
        triangle.push_back(generateRow(i));
    }
    return  triangle;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> triangle;
    triangle=generateTriangle(n);
    for(int i=0;i<triangle.size();i++){
        for(auto& it:triangle[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}


















