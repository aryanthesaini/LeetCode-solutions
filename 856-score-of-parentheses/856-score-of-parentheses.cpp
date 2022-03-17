class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int ans=0;
        for(auto x: s){
            if(x=='('){
                st.push(ans);
                ans=0;
            }
            else{
                int temp = st.top();
                st.pop();
                ans = max(2*ans,1)+temp;
            }
        }
        return ans;
        
    }
};