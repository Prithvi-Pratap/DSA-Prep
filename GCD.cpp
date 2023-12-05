#include<bits/stdc++.h>

using namespace std;

//recursive function
int gcdRecursive(int num1, int num2){
    if(num2==0){
        return num1;
    }
    return gcdRecursive(num2,num1%num2);
}


//iterative function=> also works for unsorted values
int gcdIterative(int num1,int num2){
    while(num2!=0){
        int temp=num1;
        num1=num2;
        num2=temp%num2;
    }
    return num1;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"iterative gcd" + gcdIterative(num1,num2)<<endl;
    cout<<"recursive gcd" + gcdRecursive(num1,num2)<<endl;

    return 0;
}




