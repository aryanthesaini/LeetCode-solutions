class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int total_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
        }
        int cs=0;
        
        for(int i=0;i<nums.size();i++){
            cs= cs+nums[i];
            if(2*cs - nums[i] == total_sum) return i;
        }
        
        return -1;
        
    }
};