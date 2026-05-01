#include <bits/stdc++.h>
using namespace std;


//STL - provides predefined classes and functions
// MAIN COMPONENTS:-
//1> containers [sequence - vector, list, array, deque]
            //  [associative - set, map, multiset, multimap]
            //  [unordered - unordered_set, unordered_map] 
//2> Algorithms [sort, reverese, find, count, binary_search]
//3> Iterators [begin, end, rbegin, rbend]
//4> Function objects


void explainpair(){   //pair can also be a data type
    
    pair <int, int> p = {1,2};  
    cout << p.first << p.second;
    pair <int, pair<int,int>> a= {1,{2,3}};
    cout << a.first << a.second.first << a.second.second;
    pair <int, int> arr[] = {{1,2}, {3,4}, {5,6}};   //lies inside the utility library
    cout << arr[1].second;
}

void explainvector(){    //dynamic in nature as it has dynamic size unlike arrays, but has contagious memory locations

    vector <int> v;   //{}
    v.push_back(1);  //{1}
    v.emplace_back(2); //{1,2}  generally faster than push_back

    //pair in vector
    vector < pair <int,int> > vec; //vec is the variable as v   {_,_}
    vec.push_back({1,2}); //curly braces is important
    vec.emplace_back(1,2); //we can write directly without curly bfraces


    vector <int> v1(5,100); //{100,100,100,100,100}
    vector <int> v2(5);  //{0,0,0,0,0} will consider 0 as the default value
    vector <int> v3(v2); //{0,0,0,0,0} not same as v2 but another copy of v2 store in v3



}
int main(){

}