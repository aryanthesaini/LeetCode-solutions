// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    long long int dp[1001][1001];
    
    
    long long int solve(int s[], int m , int n){
        if(m==-1 and n>0) return 0;
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        
        return dp[m][n] = solve(s,m,n-s[m])+solve(s,m-1,n);
        
        
    }
  
  
    long long int count(int S[], int m, int n) {
        
        dp[m][n+1];
        for(int i=0;i<m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=-1;
            }
        }
        
        long long int ans = solve(S, m-1, n);
        return ans;

        // code here.
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends