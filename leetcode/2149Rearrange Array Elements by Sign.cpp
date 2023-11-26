class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        vector<int> n,p;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            p.push_back(nums[i]);
            else
            n.push_back(nums[i]);
        }
        int ni=0;
        int pi=0;
        for(int i=0;i<nums.size();i=i+2)
        {
            nums[i]=p[pi];
            pi++;
            nums[i+1]=n[ni];
            ni++;
        }
        return nums;
    }
};