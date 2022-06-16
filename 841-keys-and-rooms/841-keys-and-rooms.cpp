class Solution {
public:
    
    
    void dfs(vector<int>&vis, int src, vector<int>g[]){
        vis[src]=1;
        for(auto x: g[src]){
            if(!vis[x]){
                dfs(vis, x, g);
            }
        }
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        
        vector<int>g[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<rooms[i].size();j++){
                g[i].push_back(rooms[i][j]);
            }
        }
        
        vector<int>vis(n,0);
        
        dfs(vis, 0, g);
        
        for(int i=0;i<n;i++){
            cout<<i<<"->"<<vis[i]<<" ";
            if(vis[i]==0) return false;
        }
    
        
        return true;
    }
};