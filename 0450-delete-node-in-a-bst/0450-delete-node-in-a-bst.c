/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root == NULL)
        return root;
    if(root->val > key){
        root->left = deleteNode(root->left, key);
    }
    else if(root->val < key){
        root->right = deleteNode(root->right, key);
    }
    else{
        if(root->right == NULL){
            root = root->left;
        }
        else if(root->left == NULL){
            root = root->right;
        }
        else{
            struct TreeNode *cur = root->right;
            while (cur->left){
                cur = cur->left;                
            }
            root->val = cur->val;
            root->right = deleteNode(root->right, cur->val);
        }
    }
    return root;
}