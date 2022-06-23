class Solution {
public:       
    int ans =0;
    
    
    void dfs(vector<int>& nums, int target, int curSum, int count){
        if(count==nums.size()){
            if(curSum==target) ans++;
            return;
        }
        dfs(nums,target, curSum+nums[count], count+1);
        dfs(nums,target, curSum-nums[count], count+1);
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {

        dfs(nums,target, 0, 0);
        return ans;   
    }
};