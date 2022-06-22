class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        
        if(x+y<z) return false;
        map<int,int>vis;
        int a[4]= {-x,x, -y, 0};
        queue<int>q;
        q.push(0);
        vis[0]=1;
        
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            
            if(temp==z) return true;
            
            for(int i=0;i<4;i++){
                int c = temp+a[i];
                if(c==z) return true;
                
                if(c<0 or c>x+y ) continue;
                
                if(vis[c]==0){
                    q.push(c);
                    vis[c]=1;
                } 
            }
        }
        
        return false;
        
        
        
        
    }
};