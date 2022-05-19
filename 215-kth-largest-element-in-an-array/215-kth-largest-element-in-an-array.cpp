class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxh(nums.begin(), nums.end());
        k--;
        while(k--) maxh.pop();
        return maxh.top();
    }
};