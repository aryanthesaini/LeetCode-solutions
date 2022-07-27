class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c = INT_MAX;
        int ans=0;
        
        for(auto x:prices){
            if(x<c) c=x;
            if(x-c>ans) ans=x-c;
        }
        return ans;
    }
};