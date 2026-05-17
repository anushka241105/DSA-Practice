#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, rev = 0;
    cin>>n;
    while(n>0){
        int lastdigit = n % 10;
        rev = rev*10 + lastdigit;
        n = n/10;
    }
    cout<< rev;
    return 0;
}