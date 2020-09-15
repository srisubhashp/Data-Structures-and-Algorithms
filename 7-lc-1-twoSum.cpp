#include<iostream>
//=------------------------------- Actual Solution : 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> positive;
        
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            
            if(positive.count(diff))
                return {positive[diff],i};
            positive[nums[i]]=i;
        }
           
        return {};
    }
};