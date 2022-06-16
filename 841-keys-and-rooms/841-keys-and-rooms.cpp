class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
         vector<int>g[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<rooms[i].size();j++){
                g[i].push_back(rooms[i][j]);
            }
        }
        vector<int>vis(n,0);
        
        queue<int>q;
        q.push(0);
        
        while(!q.empty()){
            int temp = q.front();
            vis[temp]=1;
            for(auto x: g[temp]){
              if(!vis[x]){
                  q.push(x);
              }
            }
            q.pop();
        }
        
        for(auto x:vis){
            if(x==0) return false;
        }
        
        return true;
    }
};