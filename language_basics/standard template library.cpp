#include <bits/stdc++.h>
using namespace std;


//STL - provides predefined classes and functions
// MAIN COMPONENTS:-
//1> containers [sequence - vector, list, array, deque]
            // [associative - set, map, multiset, multimap]
            // [unordered - unordered_set, unordered_map] 
//2> Algorithms [sort, reverese, find, count, binary_search]
//3> Iterators [begin, end, rbegin, rbend]
//4> Function objects


void explainpair(){   //pair can also be a data type
    
    pair <int, int> p = {1,2};  
    cout << p.first << p.second;
    pair <int, pair<int,int>> a= {1,{2,3}};
    cout<<a.first<<a.second.first<<a.second.second;
    pair <int, int> arr[] = {{1,2}, {3,4}, {5,6}};   //lies inside the utility library
    cout<<arr[1].second;
}

void explainvector(){

}
int main(){

}