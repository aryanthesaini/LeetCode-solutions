class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n= heights.size();
        vector<int>smaller_left;
        vector<int>smaller_right;
        int temp=-1;
        stack<pair<int,int>>st;
        //nearest smaller left vector fill
        for(int i=0;i<n;i++){
            if(st.empty()){
                smaller_left.push_back(temp);
            }
            else if(!st.empty() and st.top().first<heights[i]){
                smaller_left.push_back(st.top().second);
            }
            else{
                while(!st.empty() and st.top().first>=heights[i]){
                    st.pop();
                }
                if(st.empty()) smaller_left.push_back(temp);
                else {
                    smaller_left.push_back(st.top().second);
                }
            }
            st.push(make_pair(heights[i],i));
        }
        
        temp=n;
        
        while(!st.empty()) st.pop();
        //nearest smaller right vector fill
        
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                smaller_right.push_back(temp);
            }
            else if(!st.empty() and st.top().first<heights[i]){
                smaller_right.push_back(st.top().second);
            }
            else{
                while(!st.empty() and st.top().first>=heights[i]){
                    st.pop();
                }
                if(st.empty()) smaller_right.push_back(temp);
                else {
                    smaller_right.push_back(st.top().second);
                }
            }
            st.push(make_pair(heights[i],i));
        }
        
        reverse(smaller_right.begin(), smaller_right.end());
      
    
        int ans=0;
        for(int i=0;i<n;i++){
            ans= max(ans, (smaller_right[i]- smaller_left[i]-1)*heights[i]);
        }
        
        return ans;
        
    }
};