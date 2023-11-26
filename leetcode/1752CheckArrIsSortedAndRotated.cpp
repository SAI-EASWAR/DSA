#include<iostream>
#include<vector>
class Solution {
public:
    bool check(vector<int>& nums)
    {
        int p_count = 0;
        int n = nums.size();
        for(int i =0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                p_count++;
            }
        }
        if(nums[n-1]>nums[0])
        {
            p_count++;
        }

        return p_count<=1;
    }
};