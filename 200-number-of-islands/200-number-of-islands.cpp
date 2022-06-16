class Solution {
public:
    
    void dfs(int i, int j, vector<vector<char>>&grid, int m, int n ){
        if(i>=m or i<0 or j>=n or j<0) return;
        if(grid[i][j]=='0') return;
        grid[i][j]='0';

        
        dfs(i+1, j, grid, m, n);
        dfs(i, j+1, grid, m, n);
        dfs(i-1, j, grid, m, n);
        dfs(i, j-1, grid, m, n);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int ans =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid, m, n);
                    ans++;
                }
            }
        }
        
        return ans;
        
    }
};