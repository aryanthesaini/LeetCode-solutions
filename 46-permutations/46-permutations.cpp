class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        ans.push_back({nums[0]});
        
        for(int i=1;i<nums.size();i++){
            vector<vector<int>>temp;
            for(int j=0;j<ans.size();j++ ){
                auto y = ans[j];
                for(int k=0;k<=y.size();k++){
                    y.insert(y.begin()+k,nums[i]);
                    temp.push_back(y);
                    y=ans[j];
                }
                
            }
            ans=temp;
        }
        return ans;
    }
};