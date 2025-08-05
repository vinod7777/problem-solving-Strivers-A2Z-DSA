class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            for (int i = 0; i < nums.size(); ) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
            } else {
                i++;
            }
            }
        int m = nums.size();
        int sum = n - m;
        for (int i = 0; i < sum; i++) {
            nums.push_back(0);
        }

    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)