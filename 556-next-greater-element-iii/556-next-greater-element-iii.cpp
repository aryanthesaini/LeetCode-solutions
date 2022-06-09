class Solution {
    
private:
    
    void swapc(string &str,int i,int j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    
    void reverse(string &str,int i,int j){
        while(i<j){
            swapc(str,i,j);
            i++;j--;
        }
    }
    
   
    
    
public:
    int nextGreaterElement(int m) {
        long n=m;
        
        
        string str=to_string(n);
        if(str.length()==1){
            return -1;
        }
        int index=0;
        
        for(int i=str.length()-2;i>=0;i--){
            if(str[i]<str[i+1]){
                index=i;
                break;
            }
        }
        
        int j=str.length()-1;
        while(j>index && str[j]<=str[index]){
            j--;
        }
        
        swapc(str,index,j);
        
        
        reverse(str,index+1,str.length()-1);
        
        int ans=stol(str);
        if(ans<=n || ans>INT_MAX){
            return -1;
        }

        return ans;
        
    }
    

};