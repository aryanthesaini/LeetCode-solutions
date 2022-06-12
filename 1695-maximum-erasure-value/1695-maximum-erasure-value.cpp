class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result = 0;
        unordered_set<int> set;
        int ans = 0;
        for (int i = 0, j = 0; j < nums.size(); j++) {
            while (set.find(nums[j]) != set.end()) {
                set.erase(nums[i]);
                ans -= nums[i];
                i++;
            }
            set.insert(nums[j]);
            ans += nums[j];
            result = max(result, ans);
        }
        return result;
    }
};