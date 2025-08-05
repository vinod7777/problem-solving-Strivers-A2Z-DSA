class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<pair<int, int>> index;
        for (int i = 0; i < nums.size(); ++i) {
           index.emplace_back(nums[i], i);
        }
        sort(index.begin(), index.end());
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int sum = index[i].first + index[j].first;
            if (sum == target) {
                return {index[i].second, index[j].second};
            } else if (sum < target) {
                ++i;
            } else {
                --j;
            }
        }
        return {};
    }

};

// Time Complexity: O(nlogn)
// Space Complexity: O(n)