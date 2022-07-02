class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        
        for(auto x: s){

            if(x=='#' and !s1.empty()){
                s1.pop();
            }
            else if(isalpha(x)){
                s1.push(x);
            }
        }
        
         for(auto x: t){

            if(x=='#' and !s2.empty()){
                s2.pop();
            }
             else if(isalpha(x)){
                s2.push(x);
             }
        }
        
        return s1==s2;
    }
};