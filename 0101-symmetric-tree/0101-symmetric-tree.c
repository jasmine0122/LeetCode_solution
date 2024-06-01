/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool symmetric(struct TreeNode* A, struct TreeNode* B){
    if(A == NULL && B == NULL)
        return 1;
    else if(A == NULL || B == NULL)
        return 0;
    else if(A->val != B->val)
        return 0;
    else
        return symmetric(A->left, B->right) && symmetric(B->left, A->right);
}


bool isSymmetric(struct TreeNode* root) {
    if(root == NULL)
        return 1;
    return symmetric(root->left, root->right);
}