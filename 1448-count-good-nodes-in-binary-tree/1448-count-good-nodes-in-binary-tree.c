/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode* root, int *good, int prev){
    if(root == NULL)
        return;
    // printf("root->val=%d, prev=%d\n", root->val, prev);
    if(root->val >= prev){
        // printf("good!!\n");
        *good += 1;

    }
    prev = fmax(prev, root->val);
    dfs(root->left, good, prev);
    dfs(root->right, good, prev);
}

int goodNodes(struct TreeNode* root){
    int good = 0;
    
    dfs(root, &good, INT_MIN);
    return good;
}