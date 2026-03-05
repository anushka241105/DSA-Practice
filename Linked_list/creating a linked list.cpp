#include <bits/stdc++.h>
using namespace std;
//node of LL
class Node{
    public:
    int data;  //data value
    Node* next;   //pointer to the next node

    //constructor assigns value to new node
    Node(int data1,Node* next1){         //constructor with data and next
        data =data1;
        next= next1;
    }
    Node(int data2){      //constructor with only data
        data= data2;
        next= nullptr;
    }
};
int main(){
    vector<int> arr ={1,2,3,4};
    Node*y= new Node(arr[0]);
    cout<<y<<endl;
    cout<<y->data<<endl;
    cout<<y->next->data<<endl;
}