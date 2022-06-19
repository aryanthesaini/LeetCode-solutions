class Solution {
public:
    
    
    pair<int,int> findco(int curr, int n){
        int r = n-(curr-1)/n-1;
        int c = (curr-1)%n;
        if(r%2 == n%2 ){
            return {r, n-1-c};
        }
        else{
            return {r,c};
        }
    }
    
    
    
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int steps =0;
        
        queue<int>q;
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        q.push(1);
        vis[n-1][0]= true;
        
        while(!q.empty()){
            int s = q.size();

            cout<<s;
            while(s--){
                int temp = q.front();
                q.pop();
                cout<<"temp is"<<temp<<endl;
                cout<<"n is "<<n<<endl;
                if(temp== n*n) return steps;
                for(int i=1;i<=6;i++){
                    cout<<"hi";
                    if(temp+i>n*n) break;
                    pair<int,int> pos = findco(temp+i, n);
                    int r = pos.first;
                    int c= pos.second;
                    cout<<r<<" "<<c<<endl;
                    if(vis[r][c]==true)continue;
                    vis[r][c]= true;
                    if(board[r][c]==-1){
                        q.push(temp+i);
                    }
                    else{
                        q.push(board[r][c]);
                    }
                }
            }
            steps++;
            
        }
        
        return -1;
        
    }
};