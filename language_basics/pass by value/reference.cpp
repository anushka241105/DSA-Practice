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
    operation(num);
}