//return string by replacing the charcters with the length except the first and last chars
#include <bits/stdc++.h>
using namespace std;
string longwords(string s){
    char fst= s[0];
    char lst= s[s.size()-1];
    int count= s.length()-2;
    char ch= count + '0';
    cout<< fst + ch + lst;
}
int main(){
    string s= "nationals";
    cout<<longwords(s)<<endl;
}