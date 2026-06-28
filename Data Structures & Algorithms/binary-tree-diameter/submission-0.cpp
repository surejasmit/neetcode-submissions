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
    int solve(TreeNode *curr){
        if(!curr){
            return 0;
        }

        return 1+max(solve(curr->left),solve(curr->right));
    }
public:
    int result = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }

        result = max(result, solve(root->left) + solve(root->right));

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return result;

    }
};
