#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> res;
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
         int left=i+1,right=n-1;
        while(left<right){
             int sum=nums[i]+nums[left]+nums[right];
         if(sum==0){
            res.push_back(nums[i]);
            res.push_back(nums[left]);
            res.push_back(nums[right]);
            
            result.push_back(res);
            res.clear();
            while (left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                } 
        }  
        }sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;

    }
};