/*
Pascal's triangle:
there are three types of possible question:
1. find  the  element  at given row and column position
2. print the nth row elements
3. print the pascal's triangle till nth row
*/


// type  1: find the element at given row and column position
//brute force : using the nCr =  n!/ r! * (n-r)!

#include<bits/stdc++.h>
using namespace std;

int findNcR(int  n,int r){
    long  long result=1;
    long  long x=1;
    long long y=1;
    for(int i=0;i<r;i++){
        // x*=n-i;
        // y*=r-i;
        result*=n-i;
        result/=r-i;
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