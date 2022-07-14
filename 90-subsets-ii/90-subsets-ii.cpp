class Solution {
    
    vector<vector<int>> helper(vector<int> &nums){
        
        vector<vector<int>> ans;
        
       if(nums.size()==0){
           return {{}};
       }
        
        int temp=nums[nums.size()-1];
        nums.pop_back();
        
        vector<vector<int>> tans=helper(nums);
        
        

        for(int i=0;i<tans.size();i++){
            ans.push_back(tans[i]);
        }
        
        for(int j=0;j<tans.size();j++){
            vector<int> vec=tans[j];
            vec.push_back(temp);
            
            ans.push_back(vec);
        }
        
        return ans;
        
        
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans=helper(nums);
        
        
        set<vector<int>> st;
        for(int i=0;i<ans.size();i++){
            st.insert(ans[i]);
        }    
        
        vector<vector<int>> fans;
        
        for(auto x:st){
            fans.push_back(x);
        }
        return fans;
    }
};