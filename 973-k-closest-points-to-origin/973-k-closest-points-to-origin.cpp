class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          priority_queue< pair <int , vector<int>> >maxh;
        vector<int> smallans;
        
        for(int i=0;i<points.size();i++){
            
            for(int j=0;j<2;j++){
                smallans.push_back(points[i][j]);
            }
            
        
            
            int y=smallans[0];
            int x=smallans[1];
    
            
            
            
            maxh.push({(x*x)+(y*y),smallans});
                    smallans.clear();
            if(maxh.size()>k){
                maxh.pop();
            }
            
            
        }
        vector<vector<int>> ans;
        
        while(maxh.size()>0){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};