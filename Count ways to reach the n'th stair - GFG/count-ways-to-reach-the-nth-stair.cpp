// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        int f=1; int s=2; int ans=0; 

       int mod=1e9+7;

       if(n<=2) return n; 

       for(int i=3;i<=n;i++)

       {

           ans=(1ll*f+1ll*s)%mod; 

           f=s; 

           s=ans; 

       }

       return ans;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends