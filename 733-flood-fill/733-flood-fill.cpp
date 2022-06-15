class Solution {
public:
    
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& image, int oldcolor, int newcolor, int x, int y ){
        if(i<0 or j<0 or i>=x or j>=y) return;
        if(vis[i][j] or image[i][j]!=oldcolor) return;
        vis[i][j]=1;
        image[i][j]=newcolor;
        dfs(i+1,j, vis, image, oldcolor, newcolor, x, y);
        dfs(i,j+1, vis, image, oldcolor, newcolor, x, y);
        dfs(i-1,j, vis, image, oldcolor, newcolor, x, y);
        dfs(i,j-1, vis, image, oldcolor, newcolor, x, y);
    }
    
    
      
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x= image.size();
        int y = image[0].size();
        vector<vector<int>>vis(x, vector<int>(y,0));

        int oldcolor= image[sr][sc];
        dfs(sr,sc,vis,image,oldcolor, color,x,y);
        
        return image;
        
        
    }
};