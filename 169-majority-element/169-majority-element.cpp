class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int freq = INT_MIN;
        int ans=-1;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<endl;
            if(x.second>freq){
                ans=x.first;
                freq=x.second;
            }
        }
        return ans;
    }
};