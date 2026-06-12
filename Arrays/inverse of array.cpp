#include <bits/stdc++.h>
using namespace std;
void inversearr(vector<int> &arr){
    int n= arr.size();
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp; 
    }
}
int main(){
    vector<int> ar = {-1, 90, 77, -104, 56, 4};
    inversearr(ar);
}