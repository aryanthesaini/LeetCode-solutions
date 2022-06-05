class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
                vector<vector<int>>ans;
        ans.push_back({nums[0]});
        set<vector<int>>s;
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
        for(auto x:ans){
            s.insert(x);
        }
        
        vector<vector<int>>res;
        for(auto x:s){
            res.push_back(x);
        }
        return res;
    }
};