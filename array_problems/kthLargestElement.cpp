#include <vector>
#include <queue>

class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        int N = nums.size();
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        
        for (int i = 0; i < N; i++) {
        // Push the current element onto the max heap
        pq.push(nums[i]);
        // If the size of the max heap exceeds K, remove the largest element
        if (pq.size() > k)
            pq.pop();
    }    return pq.top(
        
    );
    }
};