#include <bits/stdc++.h>
using namespace std;
bool pal(string s){
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r){
        return true;
    }
    else return false;
}
int main(){
    string s= "mom";
    cout<<pal(s)<<endl;
}