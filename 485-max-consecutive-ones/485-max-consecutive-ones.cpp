class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ans=INT_MIN;
        int ca=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans= max(ca,ans);
                ca=0;
            }
            else{
                ca++;
            }
        }
        
        ans= max(ca,ans);

        return ans;
    }
};