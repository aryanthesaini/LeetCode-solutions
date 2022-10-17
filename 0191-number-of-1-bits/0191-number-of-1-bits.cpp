class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        int mask=1;
        
        while(n!=0){
            if((n & mask) != 0) ans++;
            n=n>>1;
        }
        
        return ans;
    }
};