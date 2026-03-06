#include <bits/stdc++.h>
using namespace std;
int difference(string s){
    int n= s.size();
    int upper_count=0, lower_count=0;
    for(int i=0; i<n; i++){
        if (isupper(s[i])){
            upper_count++;
        }
        else {
            lower_count++;
        }
    }
    return (upper_count-lower_count);
}
int main(){
    string s="AnUsHkA";
    cout<<difference(s)<<endl;
}