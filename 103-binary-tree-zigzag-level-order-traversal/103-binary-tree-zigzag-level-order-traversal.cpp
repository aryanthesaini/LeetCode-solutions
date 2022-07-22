/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        if(root==NULL) return ans;
        
        
        queue<TreeNode*>q;
        q.push(root);
         vector<int> temp;
        int check=0;
        
        while(!q.empty()){
            int s= q.size();
         
            for(int i=0;i<s;i++){
                TreeNode* cur= q.front(); q.pop();
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
                temp.push_back(cur->val); 
            }
            if(check%2==0){
                 ans.push_back(temp);
                check++;
            }
    
            
            else{
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
                check++;
            }
            
            temp.clear();
            
            
        }

        
        return ans;
        
    }
};