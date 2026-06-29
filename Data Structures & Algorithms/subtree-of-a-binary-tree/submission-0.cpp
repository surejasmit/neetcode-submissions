class Solution {
public:
bool temp(TreeNode *p, TreeNode *q){
    if(!p && q){
        return false;
    }
    if(p && !q){
        return false;
    }
    if(!p && !q){
        return true;
    }
    if(p->val != q->val){
        return false;
    }

    return temp(p->left, q->left) && temp(p->right, q->right);
}

bool solve(TreeNode *curr, TreeNode *subroot){
    if(!curr){
        return false;
    }

    if(curr->val == subroot->val){
        if(temp(curr, subroot)){
            return true;
        }
    }

    return solve(curr->left, subroot) || solve(curr->right, subroot);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    return solve(root, subRoot);
}
};