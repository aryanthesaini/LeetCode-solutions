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
    int ma;
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        ma= INT_MIN;
        int x= solve(root);
        return ma;
    }
    
private:
    int solve(TreeNode* root){
        if(!root) return 0;
        int x= solve(root->right);
        int y= solve(root->left);
        
        ma= max(ma, x+y);
        
        return max(x,y)+1;
    }
};