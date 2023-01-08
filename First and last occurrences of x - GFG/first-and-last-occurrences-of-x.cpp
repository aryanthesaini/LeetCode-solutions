//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans;
    int flag1=0;
    int flag2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) {
            ans.push_back(i);
            flag1=1;
            break;

        }
    }
    if(flag1==0) ans.push_back(-1);
    for(int j=n-1;j>=0;j--){
        if(arr[j]==x) {
            ans.push_back(j);
            flag2=1;
            break;
        }
    }
    if(flag2==0) ans.push_back(-1);
 
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends