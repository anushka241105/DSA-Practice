#include <bits/stdc++.h>
using namespace std;
//DNA of a LL
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next=NULL;
    }
};
//BASIC OPERATIONS ON LL


//1.insert at head
void insertathead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    head= newNode;
}

//2. insert at tail
void insertattail(Node* &head, int val){
    Node* newNode = new Node(val);
    
}