#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, rev = 0;
    int original = n;
    cin >> n;
    while (n > 0){
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    if (rev == original) {
        cout << true;
    }
    else{
        cout << false;
    }
    return 0;
}