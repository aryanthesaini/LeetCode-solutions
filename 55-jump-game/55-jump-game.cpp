class Solution {
public:
    bool canJump(vector<int>& arr) {

                int maxR = arr[0];
        int step = arr[0];
        int jump =1;
        int n = arr.size();
        if(n==1) return true;
        if(arr[0]==0) return false;
        
        for(int i=1;i<n;i++){
                
            if(i==n-1) return jump;
            maxR= max(maxR, arr[i]+i);
            step--;
            if(step==0){
                jump++;
                if(i>=maxR){
                    return false;
                }
                step = maxR-i;
            }
            
            
            
        }
        return true;
    }
};