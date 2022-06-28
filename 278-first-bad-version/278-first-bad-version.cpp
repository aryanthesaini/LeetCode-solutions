// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int l=0;
        int r= n;
        int res =-1;
        while(l<=r){
            int mid= l+(r-l)/2;
            
            if(isBadVersion(mid)==true){
                r= mid-1;
                res= mid;
            }
            else{
                l= mid+1;
            }
            
        }
        return res;
    }
};