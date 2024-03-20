
#include<bits/stdc++.h>
using namespace std;


int floor(vector<int> &arr,int x){
	int n=arr.size();
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]<=x){
			ans=arr[mid];
			low=mid+1;
		}
		else
		high=mid-1;
	}
	return ans;

}
int ceil(vector<int> &arr,int x){
	int n=arr.size();
	int ans=-1;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]>=x){
			ans=arr[mid];
			high=mid-1;
		}
		else
		low=mid+1;
	}

	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int> ans;
	ans.first=floor(a,x);
	ans.second=ceil(a,x);
	return ans;
}   

int main(){
    int n;
    cin>>n;
    int x;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cin>>x;
    cout<<getFloorAndCeil(arr,n,x).first<<endl;
    cout<<getFloorAndCeil(arr,n,x).second;

    return 0;
}