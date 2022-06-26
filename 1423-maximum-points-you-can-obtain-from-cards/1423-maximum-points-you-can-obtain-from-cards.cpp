class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sz=n-k; 
        int mnsum=INT_MAX;
        int total=0,currsum=0;    
        int j=0;
        for(int i=0;i<n;i++){
            total+=cardPoints[i];
            currsum+=cardPoints[i];
            if(i>=sz-1){  
                mnsum=min(mnsum,currsum);
                currsum-=cardPoints[j++];
            }
        }
        if(k==n) return total;
        return total-mnsum;
    }
};