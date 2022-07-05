class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        
        
        int r = matrix.size();
        // cout<<"r is "<<r;
        int c= matrix[0].size();
        // cout<<"c is "<<c;
        int dir=0;
        int top= 0;
        int bottom = r-1;
        int left=0;
        int right= c-1;
        
        while(top<=bottom and left<=right){
            
            if(dir==0){
                //traverse right
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            
            else if(dir==1){
                //traverse bottom
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            
            else if(dir ==2){
                //traverse left
                for(int i=right;i>= left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            else{
                //traverse top
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
            
            dir= (dir+1)%4;
            
        }
        
        
        return ans;
    }
};