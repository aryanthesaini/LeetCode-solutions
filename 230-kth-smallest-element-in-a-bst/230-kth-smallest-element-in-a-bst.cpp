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
    int kthSmallest(TreeNode* root, int k) {
        
        if(!root) return 0;
        
        priority_queue<int>maxh;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

            maxh.push(temp->val);
            if(maxh.size()>k) maxh.pop();
            
        }
     
        return maxh.top();
        
    }
};