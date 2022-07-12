class Solution {
public:
    
    int solve (int n , vector<int>&dp){
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n<0) return 0;
        if(dp[n]) return dp[n];
        
        return dp[n]= solve(n-1, dp)+solve(n-2, dp);
        
        
    }
    
    
    
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        int ans = solve(n, dp);
        
        return ans;     
        
    }
};