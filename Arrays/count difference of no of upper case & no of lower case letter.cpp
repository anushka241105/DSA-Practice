#include <bits/stdc++.h>
using namespace std;
int main(){
    char arr[] = {'A','n','U','S','h','K','a','l','O','v','e','S','A','m','A','n'};
    int cnt=0;
    for (int i= 0; i<15; i++){
        if(isupper(arr[i]))
        cnt++;
        else if (islower(arr[i]))
        cnt--;
    }
    cout<<cnt;


}