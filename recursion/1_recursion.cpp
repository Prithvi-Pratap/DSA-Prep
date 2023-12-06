// printing name N times

/*

#include<bits/stdc++.h>
using namespace std;

void printName(int i,int x){
    if(i>x) return;
    cout<<"honey"<<endl;
    printName(i+1,x);
}


int main(){
    int n;
    cin>>n;
    printName(1,n);
    return 0;
}


*/


// print an array containing 1 to N digits withour using loops
// i/p: 5
// o/p: 1 2 3 4 5 (note:return array)


#include<bits/stdc++.h>
using namespace std;

//creating an array
vector<int> myVec;

//pushing the values in array
void pushVec(int i, int n){
    if(i>n) return;
    myVec.push_back(i);
    pushVec(i+1,n);
}

//calling the recursive function
vector<int> getArray(int x){
pushVec(1,x);
return myVec;
}

//printing returned array
void printArray(vector<int> arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    printArray(getArray(n));
    return 0;
}






