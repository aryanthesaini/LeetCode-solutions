class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c = INT_MAX;
        int ans=0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<c){
                c= prices[i];
            }
            else if(prices[i]-c>ans) ans= prices[i]-c;
        }
        return ans;
    }
};