class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS = nums[0], curr = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            maxS = max(maxS, curr);
        }
        return maxS;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)