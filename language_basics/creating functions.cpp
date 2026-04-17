#include <bits/stdc++.h>
using namespace std; 

//void returns no value
void noreturn(string name){   //parametrized function
    cout<<"My Name is: "<< name <<endl;
} 

int add(int a, int b){
    int sum= a+b;
    return sum;
}

void mul(int c, int d){
    cout<<c*d;
}
int main(){
    string name;
    cin>>name;
    noreturn(name);

    string jack;
    cin>>jack;
    noreturn(jack);

    int a,b;
    cin>>a>>b;
    int res = add(a,b);
    cout<< res;

    int c,d;
    cin>>c>>d;
    mul(c,d);

    return 0;

}