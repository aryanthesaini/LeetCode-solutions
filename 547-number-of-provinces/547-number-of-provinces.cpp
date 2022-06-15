class Solution {
public:
    
    void dfs(int src, vector<int>&vis, vector<int>g[]){
        vis[src]=1;
        for(auto x: g[src]){
            if(!vis[x]){
                dfs(x, vis, g);
            }
        }
    }
        
        
        
    int findCircleNum(vector<vector<int>>& cities) {
        int n = cities.size();
        
        vector<int>g[n+1];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(cities[i][j]==1){
                    g[i+1].push_back(j+1);
                    g[j+1].push_back(i+1);
                }
            }
        }
        // for(int i=1;i<=n;i++){
        //     // cout<<g[i][0];
        //     for(auto x: g[i]){
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        
        int ans=0;
        vector<int>vis(n+1,0);
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                ans++;
                dfs(i, vis, g);
            }
        }
        
        
        return ans;
    }
};