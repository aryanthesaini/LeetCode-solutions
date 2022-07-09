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
    vector<TreeNode*> generateTrees(int n) {
       return solve(1,n);
    }
    
    
private: 
    vector<TreeNode*> solve(int s, int e){
        
        vector<TreeNode*> ans;
        if(s>e){
            ans.push_back(NULL);
            return ans;
        }
        
        for(int i=s;i<=e;i++){
            
            vector<TreeNode*>l = solve(s,i-1);
            vector<TreeNode*>r = solve(i+1,e);
            
            for(TreeNode* lf: l){
                for(TreeNode* rg:r){
                    TreeNode *root= new TreeNode(i);
                    root->left = lf;
                    root->right= rg;
                    ans.push_back(root);
                }
            }
            
        }
        
        return ans;
        
        
        
        
    }
};