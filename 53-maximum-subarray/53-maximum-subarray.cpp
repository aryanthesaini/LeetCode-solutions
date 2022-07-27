class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int cs=0;
        for(auto x: nums){
            cs+=x;       
            ans=max(ans,cs);
            if(cs<0) cs=0;

        }
        return ans;
    }
};