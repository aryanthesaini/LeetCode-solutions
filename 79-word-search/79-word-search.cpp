class Solution {
public:
    
    bool dfs(int i, int j,vector<vector<char>>& board, string word, int n, int m, int count){
        if(count == word.length()) return true;
        if(i<0 or i>=n or j<0 or j>=m or board[i][j]!= word[count]) return false;

        char temp = board[i][j];
        board[i][j]='*';
      bool found =   dfs(i+1, j, board, word, n, m, count+1) ||
          dfs(i, j+1, board, word, n, m, count+1)||
          dfs(i-1, j, board, word, n, m, count+1)||
          dfs(i, j-1, board, word, n, m, count+1);
        
        board[i][j]= temp;
        return found;
        
        
    }
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] and dfs(i,j,board,word, n,m, 0)){
                    return true;
                }
                
            }
        }
        
        return false;
        
    }
};