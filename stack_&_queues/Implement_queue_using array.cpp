#include <bits/stdc++.h>
using namespace std;
class queue{
    int arr[10];
    int currentsize;
    int start;
    int end;
    int maxsize;
    public:
    queue(){
        currentsize =0;
        start=-1;
        end=-1;
        maxsize=10;
    }

    void push(int x){
        if (currentsize == maxsize){
            cout<<"Stack Overflow"<<endl;
        }
        if(end=-1){
            start=0;
            end=0;
        }
        else{
            end= (end+1)%maxsize;
        }
        arr[end]= x;
        currentsize++;
    }

    int pop(){
        
    }
};
int main(){

}
