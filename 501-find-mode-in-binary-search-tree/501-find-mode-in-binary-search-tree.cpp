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

    vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        unordered_map<int,int>mp;
        int check=INT_MIN;
        vector<pair<int,int>>v;
        vector<int>ans;
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            mp[temp->val]++;
        }
        
        for(auto x:mp){
            v.push_back({x.second, x.first});
        }
        sort(v.begin(), v.end());
        int m = v.size();
            int temp = v[m-1].first;
        for(int i=m-1;i>=0;i--){
          
            if(v[i].first==temp){
                ans.push_back(v[i].second);
            }
           
        }
        return ans;
    }
    

};