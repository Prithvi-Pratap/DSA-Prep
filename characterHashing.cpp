#include<bits/stdc++.h>
using  namespace std;  
int main(){
    string str;
    cin>>str;

    //pre-calculation
    int Hash[26]={0};
    for(int i=0;i<str.size();i++){
        // Hash[(int)str[i]-97]+=1; or
        Hash[str[i]-'a']++;
    }

    int q;
    cin>>q;
    //fetching
    while(q--){
        char ch;
        cin>>ch;
        cout<<Hash[ch-'a']<<endl;
    }


    return 0;
}