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

//PAIRS

void explainpair(){   //pair can also be a data type
    
    pair <int, int> p = {1,2};  
    cout << p.first << p.second;
    pair <int, pair<int,int>> a= {1,{2,3}};
    cout << a.first << a.second.first << a.second.second;
    pair <int, int> arr[] = {{1,2}, {3,4}, {5,6}};   //lies inside the utility library
    cout << arr[1].second;
}

//VECTORS

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

    vector<int> a = { 20 , 10 , 15 , 6 , 7 };
    vector<int> :: iterator it1= a.begin();   //memory of 20
    it1++; //moves to next memory
    cout<<*(it1); //access the value at that particular memory ie. 10

    //cout<< it give the address and cout<< *(it) gives the value stored at that location
    it1 = it1 + 2;
    cout << *(it1); //prints 6

    //MORE ITERATORS
    vector<int> :: iterator it2 = a.end(); //{ 20 , 10 , 15 , 6 , 7, _ } so it will point to somewhere next to 7(end), which does'nt exist as of now
    it2--; //will print 7
    vector<int> :: reverse_iterator it3 = a.rend(); // {7,6,15,10,20,_} so iy will point to the next of the reversed a vector
    vector<int> :: reverse_iterator it4= a.rbegin(); //{7,6,15,10,20} so it will begin with 20

    cout<< a[0] <<" " << a.at(0);  //will give elements at 0th index
    cout<< a.back() <<" "; //gives the last element of the vector

    //classic iterator
    for(vector <int> :: iterator it =a.begin(); it != a.end(); it++){
        cout<<*(it);
    }

    //modern iterator
    for(auto it= a.begin(); it != a.end(); it++){
        cout<<*(it);
    }  //auto completely replaces - vector <int> :: iterator

    //range based-loop
    for(auto it: a){
        cout<<it<<endl;  //here it prints direct values no need of *(it)
    }

    //erase single and range elements
    a.erase(a.begin()); //{10,15,6,7}
    a.erase(a.begin()+1); //{20,15,6,7}
    a.erase(a.begin(),a.begin()+3); //to erase in range

    //insert elements
    vector <int> x{2,100}; //{100, 100}   
    x.insert(x.begin(), 300);  //{300, 100, 100} 
    x.insert(x.begin()+1, 2, 50); //{300, 50, 50, 100, 100} this shows {where to insert, how many times to insert, what to insert}
    
    cout<<x.size(); //2
    x.pop_back(); //{100}
    x.swap(a);  // v= { 20 , 10 , 15 , 6 , 7 } and a = {100,100}
    x.clear(); //clears entire vector
    cout<< v.empty();
}

//push_back/puch_front involve copying and moving 
//empace_back/emplace_front avoids extra copying/moving by constructing in place


//LISTS

void explainlists(){
    list<int> ls;
    ls.push_back(11); //{11}
    ls.emplace_back(2); //{11,2}
    ls.push_front(1); //{1,11,2}
    ls.emplace_front(3); //{3,1,11,2}
}


//DEQUES

void explaindeque(){
    deque<int> dq;
    dq.push_front(2); //{2}
    dq.push_back(3); //{2,3}
    dq.emplace_back(3); //{2,3,3}
}


//STACKS

void explainstacks(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}
    cout << st.top(); //prints 5, indexing is not supported in stack so st[0] is invalid
    st.pop(); //{4,3,2,1}
    
}
int main(){

}