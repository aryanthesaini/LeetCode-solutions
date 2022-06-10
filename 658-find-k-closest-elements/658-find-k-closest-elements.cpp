class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         priority_queue<pair<int, int>> maxh;
        vector<int>ans;
        for(int i = 0; i<arr.size(); i++){
            maxh.push({abs(arr[i]-x),arr[i]});
            if(maxh.size()>k){
               maxh.pop(); 
            }
        }
        int i = maxh.size();
        while(i>0){
            ans.push_back(maxh.top().second);
            maxh.pop();
            i--;
        }
           sort(ans.begin(), ans.end());
        
        return ans;

 
    }
};