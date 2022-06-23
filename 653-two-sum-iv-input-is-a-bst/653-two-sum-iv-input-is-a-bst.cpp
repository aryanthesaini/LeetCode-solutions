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
    
    void map_input(TreeNode* root,unordered_map<int,int> &mp){
        if(root==NULL){
            return;
        }
        
        mp[root->val]++;
        if(root->left)map_input(root->left,mp);
        if(root->right)map_input(root->right,mp);
        
        return;
        
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> mp;        
        map_input(root,mp);
        
        for(auto it=mp.begin();it!=mp.end();it++){
            
            auto it2=mp.find(it->first);
            // cout<<it2->first<<endl;
            int s=(k-(it->first));
            mp[it2->first]=0;
              if(mp.find(s)!=mp.end() and mp[s]==1){
                  return true;
              }     
        }
        return false;
    }
};