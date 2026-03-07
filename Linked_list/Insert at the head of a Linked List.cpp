#include <bits/stdc++.h>
using namespace std;
//node of LL
class Node{
    public:
    int data; //data value
    Node* next; // pointer tot he next node


    //constructor assigns value to the new node
    Node(int data1, Node* next1){    //constructor with data and next
        data =data1;
        next= next1;
    }
    Node(int data2){    //constructor with only data
        data= data2;
        next= nullptr;
    }

};
class solution{
    public:
    //function to insert a new node
    Node* insertathead(Node* head, int newData){
        Node* newNode= new Node(newData, head);
        return newNode;
    }
    //function to print the linked list
    void printlist(Node* head){
        
    }
};
int main(){

}