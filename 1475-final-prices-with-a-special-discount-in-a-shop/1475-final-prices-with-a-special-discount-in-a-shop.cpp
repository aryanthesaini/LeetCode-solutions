class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //next smaller to the right
        vector<int>ans;
        stack<int>st;
        
        for(int i=prices.size()-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(0);
            }
            else if(st.top()<prices[i]){
                ans.push_back(st.top());
            }
            else{
                while(!st.empty() and st.top()>prices[i]){
                    st.pop();
                }
                if(st.empty()) ans.push_back(0);
                else ans.push_back(st.top());
                
            }
            
            st.push(prices[i]);
            
        }
        reverse(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++){
            ans[i]= prices[i]-ans[i];
        }
        return ans;
    }
};