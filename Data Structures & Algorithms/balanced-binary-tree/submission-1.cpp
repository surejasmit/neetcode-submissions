class Solution {
public:
    int solve(TreeNode *curr){
        if(!curr){
            return 0;
        }

        int leftnode = solve(curr->left);
        int rightnode = solve(curr->right);

        if(leftnode == -1 || rightnode == -1){
            return -1;
        }

        if(abs(leftnode - rightnode) > 1){
            return -1;
        }

        return 1 + max(leftnode, rightnode);
    }

    bool isBalanced(TreeNode* root) {
        return solve(root) != -1;
    }
};