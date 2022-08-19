class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        stack<pair<int,int>>st;
        int n = t.size();
        vector<pair<int,int>>ans;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back({0,0});
            }
            else if(st.top().first>t[i]){
                ans.push_back({st.top().first, st.top().second});
            }
            
            else{
                while(!st.empty() and st.top().first<=t[i]){
                    st.pop();
                }
                if(st.empty()) ans.push_back({0,0});
                else(ans.push_back({st.top().first, st.top().second}));
            }
            
            st.push({t[i],i});
        }
        vector<int>res;
        reverse(ans.begin(), ans.end());
        for(int i=0;i<n;i++){
            if(ans[i].second==0) res.push_back(0);
            else res.push_back(ans[i].second-i);
        }
        return res;
    }
};