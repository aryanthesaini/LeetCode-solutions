// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++


vector<string>v;


class Solution{
    
    void dfs(int s, int e, string str, vector<vector<int>>&m, int n, vector<vector<bool>>&vis){
        if(s<0 or s>=n or e<0 or e>=n) return;
        if(vis[s][e] or m[s][e]==0) return;
        
        if(s==n-1 and e==n-1){
            v.push_back(str);
            return;
        }
        
        vis[s][e]=true;
        dfs(s+1, e, str+'D', m, n, vis);
         dfs(s-1, e, str+'U', m, n, vis);
          dfs(s, e+1, str+'R', m, n, vis);
           dfs(s, e-1, str+'L', m, n, vis);
           
           vis[s][e]=false;
        
    }
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        v.clear();
        vector<vector<bool>>vis(n, vector<bool>(n,false));
        
        if(m[0][0]==0) return v;
        if(m[n-1][n-1]==0) return v;
        string s="";
        dfs(0,0,s,m,n, vis);
        sort(v.begin(), v.end());
        return v;
        
    }
};

    


    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends