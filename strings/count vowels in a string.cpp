#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "program";
    int n= s.size()-1;
    int count = 0;
    for(int i=0 ; i<n; i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
        s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            count++;
        }
    }
    cout<<count;
}