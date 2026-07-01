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
    int count = 0;
    int answer = -1;

    void solve(TreeNode *curr,int k){
        if(!curr){
            return;
        }

        solve(curr->left,k);
        count++;

        if(count == k){
            answer = curr->val;
            return ;
        }

        solve(curr->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        solve(root,k);
        return answer;
    }
};
