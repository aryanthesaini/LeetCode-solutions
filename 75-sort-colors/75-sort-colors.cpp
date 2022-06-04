class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int s=0;
        int e=n-1;
        int m= 0;
        
        while(m<=e){
            
            if(nums[m]==0){
                swap(nums[s], nums[m]);
                m++;
                s++;
                
            }
            else if(nums[m]==1){
                m++;
            }
            
            else{
                swap(nums[m], nums[e]);
                e--;
            }
            
        }
        

    }
};