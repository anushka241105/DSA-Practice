#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE APPROCH
class soltuion{
public:
    int singleNonDuplicate(vector<int>& nums){
        int n = nums.size();
        if (n == 1) return nums[0];
        for(int i=0; i<n; i++){
            // if the 1st element is single
            if(i ==0){
                if(nums[i] != nums[i+1])
                return nums[i];
            }
            // if last element is single
            else if(i == n-1){
                if(nums[i] != nums[i-1])
                return nums[i];
            }
            // every other element
            else{
                if(nums[i] != nums[i+1] && nums[i] != nums[i-1])
                return nums[i];
            }
        }
        return -1;
    }
};
// 