class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        
        if(numRows==0)
            return ans;
        
        
        vector<int> first_row;
        first_row.push_back(1);
        ans.push_back(first_row);
        
        for(int i=1;i<numRows;i++)
        {
            vector<int> prev_row = ans[i-1];
            vector<int> row;
            row.push_back(1);
            for(int j=1; j<i;j++)
            {
                row.push_back(prev_row[j-1]+ prev_row[j]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
        
    }
};