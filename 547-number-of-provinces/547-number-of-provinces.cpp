class Solution {
public:
    
    void dfs(vector<int>g[], vector<int>&vis, int src){
        vis[src]=1;
        for(auto x: g[src]){
            if(!vis[x]){
                dfs(g, vis, x);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>g[n];
        vector<int>vis(n,0);
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(g, vis, i);
            }    
        }
        
        return ans;
    }
};