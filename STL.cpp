//standard template library
//-STL contains 4 components:
// 1.containers- it is of 4 categories; eg. vector, list, deque, set
// 2.iterators
// 3.algorithms
// 4.functions



#include<bits/stdc++.h>
using namespace std;
int main(){

/*

//pair: these are containers that allows to store a pair of two hetrogenous values;
pair<int, int> p={1,2};
cout<<p.first<<endl; // to access the first element of the pair
cout<<p.second<<endl; //to access the second element of the pair

// array of pairs:

pair<int, int> arr[]={{1,2},{3,4}};
cout<<arr[0].first<<endl; // to access the first element of the pair at index 0
cout<<arr[1].second<<endl; //to access the second element of the pair at index 1
*/

//vectors: include  <vector> header file
// vector: this is a container that allows to store a collection of elements of the same type;kind of a dynamic array 

vector<int> vec;

//push_back: adds an element at the end of the vector, it creates a copy of the element and pushes it at the end of the vector

vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);

// cout<<vec[0]<<endl;
// cout<<vec.at(0)<<endl;

//emplace_back(): adds an element at the end of the vector, it does not create a copy of the element;
vec.emplace_back(50);
vec.emplace_back(60);
vec.emplace_back(70);

// cout<<vec[5];

//to print the entire vector :
//we can use iterators :
//#1. begin(): Returns an iterator pointing to the first element of the vector.
//#2. end(): Returns an iterator pointing one past the last element of the vector. It doesn't point to an actual element; it's often used to determine when you've reached the end of the container.
//#3. rbegin(): Returns a reverse iterator pointing to the last element of the vector (the end in reverse).
//#4. rend(): Returns a reverse iterator pointing to one position before the first element in the vector (the beginning in reverse).

// vector<int >::iterator it=vec.begin(); // points to the first element of the vector, use dereference operator to access the element
// cout<<*it<<endl;
// ++it;
// cout<<*it;
// ++it;

// for(it;it!=vec.end();++it){
//     cout<<*it<<endl;
// } 

        //+++++++++ or +++++++++++

// for(auto it=vec.begin();it!=vec.end();++it){
//     cout<<*it<<endl;
// }

        //+++++++++++ or ++++++++++++

// we can use to 'for each' loop to iterate over the vector

// for(auto it:vec){
//     cout<<it<<endl;    //'it' is a represents the current element in each iteration
//                        // vec is the range or container you want to iterate over(here vector)
// }

//   ==> Deletion of elements:
//  - to delete a single element:
//  .erase(pos): Deletes the element at the specified position.

// vec.erase(vec.begin()+1);
// for(auto it:vec){
//     cout<< it <<" ";// 2nd element is deleted i.e. 2; o/p: 1 3 4 50 60 70
// }
// cout<< endl;

//     => .erase(first,last): Deletes the elements in the range [first, last).

// vec.erase(vec.begin()+1, vec.begin()+5);
// for(auto it:vec){
//     cout<< it<< " ";
// }
// cout<< endl;

// vec.clear();          //clear the entire vector
// for(auto it: vec){
//     cout<< it << " ";
// }


//   ==> Insertion of elements: .insert(pos, val): Inserts a copy of val at the specified position.

vector<int> myVector(2,100);
// myVector.insert(myVector.begin(),20);

    // -insert in between the two elements

// myVector.insert(myVector.begin()+1,30);

    // -insert more than one element of the same value

// myVector.insert(myVector.begin()+1,2,40); 


//   ==> insertion of a vector into another vector

vector<int> copy(2,50);
myVector.insert(myVector.begin()+1,copy.begin(),copy.end());

//  ==> .size(); // returns the number of elements in the vector

// cout<<myVector.size()<<endl;

// ==> to swap two vectors: .swap();

vector<int>v1={10,20};
vector<int>v2={30,40};
v1.swap(v2);

for(auto it:v1){
    cout<< it<<" ";
}





    return 0;
}