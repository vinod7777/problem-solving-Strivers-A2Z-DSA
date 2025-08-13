class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0, neg = 0;
        vector<int> res(nums.size());

       
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                res[pos * 2] = nums[i];
                pos++;
            } else {
                res[neg * 2 + 1] = nums[i];
                neg++;
            }
        }

        return res;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)