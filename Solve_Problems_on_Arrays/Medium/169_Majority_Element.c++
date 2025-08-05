class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp1;
        for (auto i : nums) {
            mp1[i]++;
        }
        int majorityCount = nums.size() / 2;
        for (auto pair : mp1) {
            if (pair.second > majorityCount) {
                return pair.first;
            }
        }
        return -1;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)