class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (auto x : nums) total += x;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum+=nums[i];
             if(2*sum-nums[i]== total) return i;
        }
          
        
        return -1;
    }
};