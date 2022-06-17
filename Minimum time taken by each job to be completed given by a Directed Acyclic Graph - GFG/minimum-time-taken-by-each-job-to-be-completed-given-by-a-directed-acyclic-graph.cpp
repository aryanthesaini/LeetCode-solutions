// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        vector<int> minimumTime(int n,vector<vector<int>> &edges,int m)
        {
            // code here
           vector<int> indegree(n+1, 0);
           vector<int> adj[n+1];
           for (auto i: edges)
           {
               indegree[i[1]]++;
               adj[i[0]].push_back(i[1]);
           }
           vector<int> ans(n);
            queue<int>q;
            for(int i=1;i<=n;i++){
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            int count =0;
            
            while(!q.empty()){
                int s= q.size();
                count++;
                while(s--){
                int temp = q.front();
                ans[temp-1]= count;
                q.pop();
             
                for(auto x:adj[temp]){
                    indegree[x]--;
                    if(indegree[x]==-0){
                        q.push(x);
                    }
                }
                }
                
            }
            
            return ans;
        }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<vector<int>> edges(m,vector<int>(2));
        for(int i=0;i<m;i++)
            cin>>edges[i][0]>>edges[i][1];
        Solution s;
        vector<int> ans=s.minimumTime(n,edges,m);
        for(auto j:ans)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends