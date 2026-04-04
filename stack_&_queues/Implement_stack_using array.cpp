#include<bits/stdc++.h>
using namespace std;
class stack{
    int arr[10];
    int top;
    public:
    stack(){
        top=-1;
    }

    void push(int x){
        if(top >= 10){
            cout<<"stack overflow"<<endl;
            return;
        }
        top =+ 1;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Empty"<<endl;
            return;
        }
        cout<< arr[top]<<endl;
        top--;
    }

    int top(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        }
        cout<<arr[top];
    }

    int size(){
        return top+1;
    }
};
int main(){

}