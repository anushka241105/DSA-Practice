#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE
class solution{
public:
     int subarraySum(vector<int>& nums, int k){
        int n = nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=nums[j];
                if(sum == k){
                    cnt++;
                }
            }

        }
        return cnt;
     }
};
// BETTER APPROCH
class soltuion{
    public:
        int subarraysum(vector<int>& nums, int k){
            
        }

};