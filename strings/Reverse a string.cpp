#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "anushka";
    //using inbuit function
    reverse(s.begin(),s.end());
    cout<<s<<endl;


    int i = 0;
    int j = s.size()-1;

    while(i<j){
        int tmp = s[i]; //s->0 is a
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    cout << s << endl;
}