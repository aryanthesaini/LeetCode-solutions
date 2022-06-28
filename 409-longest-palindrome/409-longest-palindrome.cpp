class Solution {
public:
    int longestPalindrome(string s) {
        
        int ans=0;
        int flag=0;
        map<char,int>m;
        for(char &c:s) {
            m[c]++;
        }
        
        for(auto itr: m){
            if(itr.second % 2==0){
                ans+= itr.second;
            }
            else{
                flag=1;
                ans+= itr.second-1;
            }
        }
        if(flag==1)
        return ans+1;
        
        else return ans;
    }
};