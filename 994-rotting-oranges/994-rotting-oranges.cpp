class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;
        queue<pair<int,int>>q;
        int total =0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]!=0) total++;
            }
        }
         int dx[4]= {0,0,1,-1};
        int dy[4]= {1,-1,0,0};
        int cnt=0;
        while(!q.empty()){
            int k = q.size();
            cnt+=k;
            while(k--){
                auto temp = q.front();
                q.pop();
                
                int x= temp.first;
                int y = temp.second;
                
                for(int i=0;i<4;i++){
                    int nx= x+dx[i];
                    int ny = y+dy[i];
                    
                    if(nx<0 or ny<0 or nx>=n or ny>=m or grid[nx][ny]!=1)                           continue;
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                    
                }

            }
           if(!q.empty()) ans++;
        }
        
         return cnt==total ? ans : -1;
        
    }
};