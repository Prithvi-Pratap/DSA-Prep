/*
approaches:1.brute force -> using any sorting algorithm(such as merge sort or quick sort).
2. hashing:calculating the no. of occurrences, and manually updating the array.
3. DNF algorithm: Dutch National Flag algo, basically the intuition is to push the lower values to the extreme left and the higher values to the extreme right.

steps: 
1.initialize variables , low=0,mid=0,high=n-1

e.g: suppose three 6 cards of 2red 2blue 2white (dutch flag colors) , shuffled and kept , now the low and mid pointers will point to the 1st card and the high pointer will point to the last card.

2. now take the first card (i.e. pointed by mid),if it is red(high) then will swap it with the card at the last( i.e. pointed by high) and decrement the high( which means all the cards after the high pointer are red or known high values)

3. if the card is blue (i.e. low) then , will swap it with the card pointed by the low pointer and increment the mid and low( which means all the cards before the low pointer are blue/ low values) 

4. if the card is green (mid value) then will simply increment the mid pointer(dont care about the mid values these will fall accurately)


*/

#include <bits/stdc++.h> 

using namespace std;

void sortArray(vector<int>& arr, int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
            // mid++;
        }
        else mid++;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }

    sortArray(arr,n);

    for(auto& it:arr){
        cout<<it<<" ";
    }

    return 0;
}













