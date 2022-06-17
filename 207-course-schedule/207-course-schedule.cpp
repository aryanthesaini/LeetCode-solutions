class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        int num = pre.size();
        
        vector<vector<int>> adj(n);
        int i;
        for(i=0;i<num;i++){
            adj[pre[i][0]].push_back(pre[i][1]);    
        }
        
        
        vector<int> indeg(n,0);
        queue<int> q;
        
        for(i=0;i<n;i++){
            
            for(auto it:adj[i])
                indeg[it]++;
            
        }
        
        for(i=0;i<n;i++){
            if(indeg[i]==0)
                q.push(i);
        }
        
        int cnt = 0;
        while(!q.empty()){
            int num = q.front();
            q.pop();
            cnt++;
            
            for(auto it:adj[num]){
                indeg[it]--;
                
                if(indeg[it]==0)
                    q.push(it);
            }
        }
        
        if(cnt==n)
            return true;
        else
            return false;
    }
};