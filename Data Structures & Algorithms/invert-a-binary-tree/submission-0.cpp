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
    void solve(TreeNode *curr){
        if(!curr){
            return ;
        }
        if(!curr->left && !curr->right){
            return ;
        }

        TreeNode *leftside = curr->left;
        TreeNode *rightside =  curr->right;

        curr->left = rightside;
        curr->right = leftside;

        solve(curr->left);
        solve(curr->right);

    }
public:
    TreeNode* invertTree(TreeNode* root) {
        solve(root);
        return root;
    }
};
