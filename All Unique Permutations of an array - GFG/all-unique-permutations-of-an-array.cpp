// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> nums ,int n) {
        // code here
                   vector<vector<int>>ans;
        ans.push_back({nums[0]});
        set<vector<int>>s;
        for(int i=1;i<nums.size();i++){
            vector<vector<int>>temp;
            for(int j=0;j<ans.size();j++ ){
                auto y = ans[j];
                for(int k=0;k<=y.size();k++){
                    y.insert(y.begin()+k,nums[i]);
                    temp.push_back(y);
                    y=ans[j];
                }
                
            }
            ans=temp;
        }
        for(auto x:ans){
            s.insert(x);
        }
        
        vector<vector<int>>res;
        for(auto x:s){
            res.push_back(x);
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends