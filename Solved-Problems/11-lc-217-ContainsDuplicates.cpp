//. https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(!nums.size())
            return false;
        else{
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1])
                return true;
            i++;
        }
        }
    return false;
    }
};