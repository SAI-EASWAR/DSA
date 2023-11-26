class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
    // Using hashmap, storing the count;
    // map<int, int> frequencyMap;
    // for (auto e : nums) {
    //         frequencyMap[e]++;
    //     }
    

    // int halfSize = nums.size() / 2;
    // for (auto x : frequencyMap) {
    //     if (x.second > halfSize) {
    //         return x.first; 
    //     }
    // }
    // return -1;


    // moore voting algorithm
    int n = nums.size();
    int cnt =0;
    int ele;
    for(int i=0;i<n;i++)
    {
        if(cnt==0){
        ele = nums[i];
        cnt++;}
        else if(ele == nums[i])
        cnt++;
        else
        cnt--;
    }
    int cnt2 =0;
    for(int i =0;i<n;i++){
        if(ele == nums[i])
        cnt2++;
    }
    cout<<ele<<" ";
    if(cnt2>n/2)
    return ele;

    return -1;
    }
};