class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0;i<t.length() and j<s.length(); i++){
            if(t[i]==s[j])j++;
        }
        
        if(s.length()==j) return true;
        else return false;
        
    }
};