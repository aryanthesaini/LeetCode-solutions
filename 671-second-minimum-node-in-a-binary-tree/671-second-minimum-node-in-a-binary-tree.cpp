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
    int findSecondMinimumValue(TreeNode* root) {
              if(!root) return 0;
        int ans =INT_MAX;
        queue<TreeNode*>q;
        q.push(root);
        set<int>st;
        while(!q.empty()){
            
            auto temp = q.front();
            q.pop();
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            st.insert(temp->val);
            
        }
        
        if(st.size()<2){
            return -1;
        }
        vector<int>temp;
        for(auto x:st){
            temp.push_back(x);
        }
        sort(temp.begin(), temp.end());
        
        
        return temp[1];
        
    }
};