// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    // Code here
int num = pre.size();
        
        vector<vector<int>> adj(n);
        int i;
        for(i=0;i<num;i++){
            adj[pre[i].first].push_back(pre[i].second);    
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

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends