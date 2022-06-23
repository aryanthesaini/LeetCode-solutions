class Solution {
public:
    int ans =0;
    
    void dfs(vector<int>& nums, int target, int curSum, int count, int n){
        if(count == n){
            if(curSum == target)ans++;
            return;
        }
        
        dfs(nums,target,curSum+nums[count], count+1, n);
        dfs(nums,target,curSum-nums[count], count+1, n);
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        dfs(nums,target,0,0,n);
        return ans;
    }
};