#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st; //LIFO
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl; //30
    cout<<st.size()<<endl; //3
    cout<<st.empty()<<endl; //0
    st.pop(); //pop 30 
    cout<<st.top()<<endl;  //20
}