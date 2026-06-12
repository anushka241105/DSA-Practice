#include <bits/stdc++.h>
using namespace std;

// # check if a given array is sorted or not
// if sorted return true
// else return false
bool sortedarr(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n-1; i++){ //i=2
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> ar = {1,2,4,3,5};
    cout << sortedarr(ar);
    
    // isSorted(ar) -> true;
    
    // vector<int> ar = { 100,92,901,876};
    // output -> false


}