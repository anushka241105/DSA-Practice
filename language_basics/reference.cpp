#include <bits/stdc++.h>
using namespace std;
//pass by value
void operation(int num){
    num = num + 5;
    cout<<num<<endl;
    num = num + 5;
    cout<<num<<endl;
}
int main(){
    int num = 10;
    //works inside the operation function
    cout<<num<<endl;
    operation(num);
    //works outiside the operation function
    cout<<num<<endl; //gives original value of num as 
    //function does'nt changes the original value it chnages it's copy
}