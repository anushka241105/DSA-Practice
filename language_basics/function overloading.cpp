#include <bits/stdc++.h>
using namespace std;
//function overloading-where multiple functions have the same name but different parameter lists (different number, type, or order of parameters).
class test{
    public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }
};
int main(){
    test obj;
    cout<<obj.add(2,3)<<endl;
    cout<<obj.add(2.3,3.4)<<endl;
}