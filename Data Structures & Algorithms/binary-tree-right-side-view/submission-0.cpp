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
    map<int,int>mp;

    void solve(TreeNode *curr,int level){
        if(!curr){
            return;
        }
        
        mp[level] = curr->val;

        solve(curr->left,level+1);
        solve(curr->right,level+1);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>vc;
        solve(root,0);
        for(auto it:mp){
            vc.push_back(it.second);
        }

        return vc;
    }
};
