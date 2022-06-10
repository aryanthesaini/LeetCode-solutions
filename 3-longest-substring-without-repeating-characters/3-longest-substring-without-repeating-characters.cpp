class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        
        int i=0;
        int j=0;
        int ans=0;
        
        while(j<s.length())
        {
            if(a.find(s[j])!= a.end())
            {
                a.erase(s[i]);
                i++;
                
            }
            
            else{
                
                a.insert(s[j]);
                ans= max(ans, j-i+1);
                j++;
                
            }
        }
        
        return ans;
        
    }
};