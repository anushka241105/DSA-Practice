#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE SOLUTION
class solution{
public:
   void rotate(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                ans[j][n-1-i]= matrix[i][j];
            }
        }
        matrix=ans;

   }
};
// OPTIMAL APPROCH 
class solution{
public:
    void rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        // tarnspose
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end() );
        }

    }
};