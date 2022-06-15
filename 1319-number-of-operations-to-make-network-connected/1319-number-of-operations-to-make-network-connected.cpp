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
    
    
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        int ans=0;
        int m = connections.size();
        if(m<n-1) return -1;
        vector<int>g[n];
        for(int i=0;i<m;i++){
            g[connections[i][0]].push_back(connections[i][1]);
            g[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int>vis(n,0);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(g, vis, i);
            }
        }
    
        return ans-1;
        
    }
};