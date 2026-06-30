class Solution {
public:
    int count = 0;

    void solve(TreeNode* curr, int maxSoFar) {
        if (!curr) {
            return;
        }

        if (curr->val >= maxSoFar) {
            count++;
        }

        maxSoFar = max(maxSoFar, curr->val);

        solve(curr->left, maxSoFar);
        solve(curr->right, maxSoFar);
    }

    int goodNodes(TreeNode* root) {
        solve(root, root->val);
        return count;
    }
};