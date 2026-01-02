#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<char> arr={'a','m','a','n','a'};
    int n = arr.size();
    int left=0, right = n-1;
    while(left<right){
        if (arr[left]!=arr[right]){
            cout<<"not palindrome";
            break;
        }
        left ++;
        right --;
    }
    // cout<<"palindrome";
    return 0;
}