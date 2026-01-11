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
// OPTIMAL APPROCH
class solution{
public:
int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if (n==1) return nums[0];    
    if(nums[0] != nums[1]) return nums[0];
    if(nums[n-1] != nums[n-2]) return nums[n-1];
    int low=1, high = n-2;
    while(low <= high){
        int mid=(low+high)/2;
        if (nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) {
            return nums[mid];
        }
        if( (mid%2 ==1 && nums[mid-1] == nums[mid]) || (mid%2 ==0 && nums[mid] == nums[mid+1])){
            low= mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return -1;
    }
};